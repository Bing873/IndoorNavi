using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class locateBySize:MonoBehaviour
    {
    public GameObject test;
    public List<GameObject> obj;
    public List<Vector3> pos;
    //public int num = 7;

    // Use this for initialization
    public void Start()
    {
  
    }

    public void createStart()
    {
        pos = PosCreate();
        obj = ObjCreate();
        LocateObj(obj, pos);
        Debug.Log("lbs called");
        //SizeSort(obj);
    }
    public void TestDebug() { Debug.Log("I'm here!"); }

    // Update is called once per frame
    public void Update()
    {   
        if (Input.GetKeyDown(KeyCode.Keypad8))
        {
            Debug.Log("UpdateSizeSort called");
            SizeSort(obj);
        }

    }

    //create N(num) locations
    public List<Vector3> PosCreate(int num = 7)
    {

        //define the variables
        List<Vector3> location0 = new List<Vector3>();

        int i = 0;

        while (i < num)
        {
            location0.Add(new Vector3(0.1f*i, 0.01f, 6));
            i++;
        }
        return location0;
    }

    public List<GameObject> ObjCreate(int num = 7)
    {

        //create spheres 

        List<float> Radius = new List<float>();
        List<GameObject> Spheres0 = new List<GameObject>();
        int i = 0;
        System.Random rnd = new System.Random();

        //generate the random objects
        while (i < num)
        {
            // float radius = (float)rnd.NextDouble();
            Radius.Add((float)(rnd.NextDouble()*0.1));
            GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //sphere.s
            sphere.transform.localScale = new Vector3(Radius[i], Radius[i], Radius[i]);
            //sphere.gameObject.AddComponent<followUser>();
            Spheres0.Add(sphere);

            i++;

        }
        return Spheres0;
    }

    void LocateObj(List<GameObject> obj, List<Vector3> pos)
    {
        // loacte objects in obj on position pos in ascending order
        int i = 0;
        while (i < obj.Count)
        {
            obj[i].transform.position = pos[i];
            i++;
        }
    }

    void SizeSort(List<GameObject> obj)
    {
        //sort objects in obj by size

        //int j = 0;
        //int exchangeCount = 0;
        //int z = 0;
       // Debug.Log("SizeSort called");

        for (int i = 0; i < obj.Count; i++)
        {
            //Debug.Log("Loop executed at i = " + i);
            for (int j = 0; j < obj.Count - 1; j++)
            {
                StartCoroutine(ReLocBySize(obj,pos,i,j));
            }

        }
    }//StartCoroutine(Waiter())          




    IEnumerator ReLocBySize(List<GameObject> obj, List<Vector3> pos, int i, int j)
    {
        yield return new WaitForSeconds((i * 5 + j*2) / 2);
        if (obj[j].GetComponent<Renderer>().bounds.size.x > obj[j + 1].GetComponent<Renderer>().bounds.size.x)
        {
            obj[j].transform.position = pos[j + 1];
            obj[j + 1].transform.position = pos[j];
            GameObject temp = obj[j];
            obj[j] = obj[j + 1];
            obj[j + 1] = temp;
           // Debug.Log("ReLocBySize end and i, j = " + i + "," + j);
        }
        /*IEnumerator Waiter() {
            yield return new WaitForSeconds(2f);
            Debug.Log("waiter called");
        }*/

    }
}
