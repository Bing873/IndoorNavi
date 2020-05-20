using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Experimental.Utilities;

public class anchorWithoutSpeech : MonoBehaviour
{
    public WorldAnchorManager worldAnchorMg;
    public GameObject gameObjectToAnchor = null;
    // Start is called before the first frame update
    void Start()
    {
        gameObjectToAnchor = this.gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha8)) {
            worldAnchorMg.AttachAnchor(gameObjectToAnchor, null); //not called in Editor
            Debug.Log("anchored without speech!");
        }

    }
}
