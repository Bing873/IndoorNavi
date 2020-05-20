
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit;


public class showEyeGazeinfo : MonoBehaviour
{
    //create an array to store gaze info
    //private string[] gazeInfo;
    private string[] eyeGazeData;
    private string eyeGazeData2show;
    private IMixedRealityEyeGazeProvider EyeGazeProvider;
   
    //private IMixedRealityEyeGazeProvider eyeTrackingProvider = null;


    // Start is called before the first frame update
    void Start()
    {
    EyeGazeProvider = CoreServices.InputSystem.EyeGazeProvider;
    }

    // Update is called once per frame
    void Update()
    {
        //get eye gaze info
        eyeGazeData = new string[] {
        EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.x.ToString():"0",
        EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.y.ToString():"0",
        EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.z.ToString():"0",
        };
        eyeGazeData2show = string.Join(",", eyeGazeData); 
        //show eye gaze info
        gameObject.GetComponent<Text>().text = eyeGazeData2show;
        //gameObject.GetComponent<Text>().resizeTextForBestFit = true;
    }
}
