using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class TextBackground : MonoBehaviour
{
    public RectTransform uiText = null;
    public RectTransform uiImage = null;
    public Vector2 position;
    
    // Start is called before the first frame update
    void Start()
    {
        uiImage = GameObject.Find("TestWindow").GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        position.x = uiText.sizeDelta.x + 10f;
        position.y = uiText.sizeDelta.y + 5f;
        uiImage.sizeDelta = position;
        
    }
}
