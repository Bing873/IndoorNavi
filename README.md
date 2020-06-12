# IndoorNavi

This is Bing's Ph.D. thesis project.  
This project is to find with Augmented Reality, how to encourage users learning spatial knowledge and which kinds of interface design can help users to learn more (and more intuitively) in indoor navigation.  
## Device  
**Hardware**  
* HoloLens 1&2 
   
**Software**  
* Unity (together with [MRTK](https://microsoft.github.io/MixedRealityToolkit-Unity/README.html))  
* Visual studio  

## Keep going  
Till now (April 2020), I have used [spatial mapping](https://docs.microsoft.com/en-us/windows/mixed-reality/spatial-mapping), [speech input](https://microsoft.github.io/MixedRealityToolkit-Unity/Documentation/Input/Speech.html), [spatial anchors](https://docs.microsoft.com/en-us/windows/mixed-reality/spatial-anchors) and [manipulation handler](https://microsoft.github.io/MixedRealityToolkit-Unity/Documentation/README_ManipulationHandler.html).   
The next step is to use [Spectator View](https://docs.microsoft.com/en-us/windows/mixed-reality/spectator-view)(tutorial [here](https://microsoft.github.io/MixedReality-SpectatorView/README.html)) to demonstrate this interface/project to more people.  
(After all, I only have access to one HoloLens :laughing:)

**update 2020.6.12**
using [AzureSpatialAnchors](https://github.com/Azure/azure-spatial-anchors-samples) to build a [wayfinding](https://docs.microsoft.com/en-us/azure/spatial-anchors/concepts/anchor-relationships-way-finding#examples) experience. Realizing this function can make the next-step work much easier.
Now I have used [this tutorial](https://docs.microsoft.com/en-us/azure/spatial-anchors/tutorials/tutorial-new-unity-hololens-app?tabs=UnityPackage#putting-everything-together) to create a cloud spatial anchor. Notice: "AccountDomain" must be added to get it work. Otherwise it's not validated.



**tips**
1. Using [GitHub for Unity](https://github.com/github-for-unity) is much easier than using git alone
