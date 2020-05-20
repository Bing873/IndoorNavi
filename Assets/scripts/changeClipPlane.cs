using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class changeClipPlane : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void changeFarClipPlane()
    {
        Camera.main.farClipPlane = 5.0f;
    }

    public void changeNearClipPlane() 
    {
        Camera.main.nearClipPlane = 0.85f;
    }
}
