using UnityEngine;
using System.IO;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using System;



public class logEyeMovementData : MonoBehaviour
{
    private IMixedRealityEyeGazeProvider EyeGazeProvider => eyeTrackingProvider ?? (eyeTrackingProvider = CoreServices.InputSystem?.EyeGazeProvider);
    private IMixedRealityEyeGazeProvider eyeTrackingProvider = null;

    // Start is called before the first frame update
    void Start(){
        //create a .txt file for EyeMovement data
        FileStream eyeData = File.Create("Z:\\writtenFiles\\eyeMovement2.txt");
        eyeData.Close();
        string[] colName = { "time Stamp", "eyeposition.x","eyepoxition.y","eyeposition.z"};
        string colName2Log = string.Join(" ", colName);
        Debug.Log(colName);
        System.IO.File.WriteAllText(@"Z:\\writtenFiles\\eyeMovement2.txt", colName2Log);
    }
    
    // Update is called once per frame
    void Update()
    {
        string[] data = new string[]
        {
            EyeGazeProvider.Timestamp.ToString(),
            EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.x.ToString():"0",
            EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.y.ToString():"0",
            EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.z.ToString():"0",
        };

        
        string data2Log = string.Join(" ", data);
        System.IO.File.AppendAllText(@"Z:\\writtenFiles\\eyeMovement2.txt", data2Log + Environment.NewLine);

    }

    
}
