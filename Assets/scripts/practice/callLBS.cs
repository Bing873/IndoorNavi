using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class callLBS : MonoBehaviour, IMixedRealityFocusHandler
{
    public locateBySize lbs;
    
    //private void Awake(){}

    void IMixedRealityFocusHandler.OnFocusEnter(FocusEventData eventData)
    {
        Debug.Log("fixed");
        lbs= gameObject.AddComponent<locateBySize>();
        lbs.createStart();
        lbs.Update();
    }
    void IMixedRealityFocusHandler.OnFocusExit(FocusEventData eventData)
    {}
       
}
