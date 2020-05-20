//for creating landmarks
//for creating instruction arrows
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class createObj : MonoBehaviour
{
    public GameObject LandmarkToSpawn;
    public GameObject ArrowToSpawn;
    public Vector3 InitialPosition = new Vector3(0.15f,0.1f,0.1f);
    private GameObject NewLandmark;
    private GameObject parentObject;
    // Start is called before the first frame update
    void Start()
    {
        parentObject = GameObject.Find("LandmarkCollection");
    }

    // Update is called once per frame
    /*void Update()
    {
        
    }*/

    public void createLandmark() {

        NewLandmark = Instantiate(LandmarkToSpawn);
        NewLandmark.name = "NewLandmarkName";
        NewLandmark.transform.position = InitialPosition;
        NewLandmark.GetComponent<MeshRenderer>().material.color = Color.cyan;
        NewLandmark.transform.parent = parentObject.transform;
    }

    public void createArrow() { }
}
