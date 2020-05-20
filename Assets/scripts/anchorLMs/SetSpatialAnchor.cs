using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Experimental.Utilities;

public class SetSpatialAnchor : MonoBehaviour
{
    public WorldAnchorManager worldAnchorMg;
    public GameObject gameObjectToAnchor = null;
    // Start is called before the first frame update
    void Start()
    {
        gameObjectToAnchor = this.gameObject;
    }

    // Update is called once per frame
    public void SetAnchor()
    {
        worldAnchorMg.AttachAnchor(gameObjectToAnchor,null); // not called in editor
        Debug.Log("anchored!");
        //gameObjectToAnchor.GetComponent<Renderer>().material.color = Color.red;
    }

    public void RemoveAnchor() { 
        worldAnchorMg.RemoveAnchor(gameObjectToAnchor); 
    }
}

