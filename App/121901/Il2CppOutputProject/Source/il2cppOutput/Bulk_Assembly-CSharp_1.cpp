#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager
struct WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tE4BAFE2B5651E0CF0E856FD73C51FE942284CF4E;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// System.Action`1<UnityEngine.Font>
struct Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tB917211DA126597937FC7D5AF12A9E1B7A763F6A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager/AnchorAttachmentInfo>
struct Queue_1_t8161E7C25064EDAC6A80F5B4E50A45135CE4D5AF;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t5031A3D1172F5D774E43B5AE7EF4F0F79CE5796A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.TMP_TextEventHandler/CharacterSelectionEvent
struct CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90;
// TMPro.TMP_TextEventHandler/LineSelectionEvent
struct LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F;
// TMPro.TMP_TextEventHandler/LinkSelectionEvent
struct LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8;
// TMPro.TMP_TextEventHandler/SpriteSelectionEvent
struct SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32;
// TMPro.TMP_TextEventHandler/WordSelectionEvent
struct WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554;
// TextBackground
struct TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>
struct UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930;
// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;
// anchorWithoutSpeech
struct anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843;
// callLBS
struct callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55;
// createCanvasObjs
struct createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8;
// createObj
struct createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE;
// locateBySize
struct locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B;
// locateBySize/<ReLocBySize>d__11
struct U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D;
// logEyeMovementData
struct logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151;
// reLocateObj
struct reLocateObj_t45183B27C22BE51A826139EBE3750C49696C77A6;
// showEyeGazeinfo
struct showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E;
// turnOnOrOff
struct turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9;
// useSpatialMappingData
struct useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7;
// visibleArea
struct visibleArea_t4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57;

extern RuntimeClass* CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_tC7A125EA1F2C1B004299BC1580BB2EB77BB5ADD9_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_tBE2CE86712A2F058355AEF0A302C1D728D9D60F7_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tB7D8D26E7324CDD1F7BC743BE7F8C1D9E3BF0D71_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral02E0182AE38F90D11BE647E337665E67F9243817;
extern String_t* _stringLiteral0EEA60820FA3419629A65B38637B59C82EB64D8C;
extern String_t* _stringLiteral11CBDF7923F4A524EF4C743CEBB596B3D01C3F84;
extern String_t* _stringLiteral1C13208749839D182FE338E19F6700B73034E894;
extern String_t* _stringLiteral1E08C7274C45BCAF6980597DFBEDBE76FC7F43C8;
extern String_t* _stringLiteral25879169B1CD447A0ADA4988E828A1606D81EA2D;
extern String_t* _stringLiteral31050DC39ADDF45DADD84CFC8FD9479BF563E226;
extern String_t* _stringLiteral348EF8474D7CA332C3DC2216E807BC5797E63F1E;
extern String_t* _stringLiteral39B30745FAD48A6703C140679FAE451D7246F3E8;
extern String_t* _stringLiteral3DD65769DEE12088D94CC94A4AF65E4D39E04CF1;
extern String_t* _stringLiteral3F19693B18900F54E4CD92B9D9CFEFDDF7577AAB;
extern String_t* _stringLiteral4C9AFAD5592AE4F8337274546ED749D6A33DB862;
extern String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
extern String_t* _stringLiteral5CC6F0E13D2FA0B68E6D4AFD4BE18FE3398207F0;
extern String_t* _stringLiteral618F1755B074F00F5012676C08FDC13D9365F23B;
extern String_t* _stringLiteral6CA48225F44DCC9D33AD47622BDA974DB590F407;
extern String_t* _stringLiteral7BC555991DBAB41AA198FBD77899D49A277D4D6D;
extern String_t* _stringLiteralA8BE613FF60F50A88741AB3A80D731B2BA0C46AF;
extern String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBA41A4BC69C1272D69456DFE01E7847106728A42;
extern String_t* _stringLiteralE1F98DE2B8A7D8728701D49A67C3542B68202DB8;
extern String_t* _stringLiteralF10D052505ABD06BE3CD6A6A00653749C86517D9;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564_m37701F5F2F4E14F68C7BED5E3642D1A8E4D80967_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD68D831E57A2A547C0F45127896158954FDE8685_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_mB3D221D6581013B31743459A5487828980579434_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m498C8BF6CD94A03A981AE236A616912C7B68BDA9_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TislocateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B_m6B93CD20E60B1DC6DB6CEA4A54C5AEA1DEF6F508_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m2FD9CC1491B61A8BD35D12587774F460F98D4AB6_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
extern const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mEFDF5B03D4F62CF5EA266F45ED075CF83C3CAC66_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_m9D478BB73C8B7721C029E0C5F171A0E559356FC0_RuntimeMethod_var;
extern const RuntimeMethod* U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_Reset_mD4FBB056D1EA097E862955CC8466D139A37FE713_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var;
extern const uint32_t CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId;
extern const uint32_t LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId;
extern const uint32_t LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId;
extern const uint32_t SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId;
extern const uint32_t TextBackground_Start_mC58995547B88ECBEDEA73255C75B6049D96D7D86_MetadataUsageId;
extern const uint32_t U3CReLocBySizeU3Ed__11_MoveNext_mA310CE28899EDEE747F237F96418B79D26194938_MetadataUsageId;
extern const uint32_t U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_Reset_mD4FBB056D1EA097E862955CC8466D139A37FE713_MetadataUsageId;
extern const uint32_t WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId;
extern const uint32_t anchorWithoutSpeech_Update_m931C184F18C21D7A08F5EA25A7974541A0DF07C2_MetadataUsageId;
extern const uint32_t callLBS_Microsoft_MixedReality_Toolkit_Input_IMixedRealityFocusHandler_OnFocusEnter_mC525AF6584946E3508A7614FD300DBD43D98A5A9_MetadataUsageId;
extern const uint32_t createCanvasObjs_Start_mFDC1994C663543F1A0F8B5116D7D704DD4941543_MetadataUsageId;
extern const uint32_t createCanvasObjs_createCanvas_mD1230A4121A8339F04519F4CF613269BD3A06A1A_MetadataUsageId;
extern const uint32_t createObj_Start_m94A62767B1EFF0A74C06AEFBCF24AB204BD75114_MetadataUsageId;
extern const uint32_t createObj_createLandmark_m581CB24877440FEEDA1F4C98FE0C0B629B465566_MetadataUsageId;
extern const uint32_t locateBySize_LocateObj_m70AEEFADA5390AD8816C9EBE3D96F0D98AA81EF2_MetadataUsageId;
extern const uint32_t locateBySize_ObjCreate_mDB3B4D833622EA82CE3C717AF33AAF220C48DC86_MetadataUsageId;
extern const uint32_t locateBySize_PosCreate_m6741E14EF1A9A29FF674D40E51F57289A2B69438_MetadataUsageId;
extern const uint32_t locateBySize_ReLocBySize_m2E14E85CFCCF314EFA26ED974BEA80668A770520_MetadataUsageId;
extern const uint32_t locateBySize_SizeSort_mF29C1524B54AEE2FCDF82983FBFC5F0D2BDC0099_MetadataUsageId;
extern const uint32_t locateBySize_TestDebug_mAB22F43C923DA3763982E420DE9D8A5A88130196_MetadataUsageId;
extern const uint32_t locateBySize_Update_mE658382F13AAF9DC3EF3F1DEFFA150A18DB671FC_MetadataUsageId;
extern const uint32_t locateBySize_createStart_m2F3FD1ED8FDD052FD68E7A6EF4F418F668F54452_MetadataUsageId;
extern const uint32_t logEyeMovementData_Start_m23F180F25F0D842ED43A0A6D31CF73C651EBD32D_MetadataUsageId;
extern const uint32_t logEyeMovementData_Update_mB6CD6FCFA1A37DB59E56DBE62F601FAA0C161F5C_MetadataUsageId;
extern const uint32_t logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF_MetadataUsageId;
extern const uint32_t showEyeGazeinfo_Start_m37ACD05E0E65F112AD0134855F3909E3F76A6A17_MetadataUsageId;
extern const uint32_t showEyeGazeinfo_Update_mB53189E15CFDA96165484B13FC7A107F37466C2A_MetadataUsageId;
extern const uint32_t turnOnOrOff_show_mAD5459A4BB8CE25535270ABBF532A1808C76BD8E_MetadataUsageId;
extern const uint32_t useSpatialMappingData_Start_m29348344B4DD26C49DCD7812FE925C4861631FC3_MetadataUsageId;
extern const uint32_t useSpatialMappingData_startspatialmapping_m63FF339B7C94C5C5F45BA7388A470667E68CF6FE_MetadataUsageId;
extern const uint32_t useSpatialMappingData_suspendspatialmapping_mEBDCF4537889B4BA0567C468E94122DF3B8789EC_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASESPATIALAWARENESSOBJECT_T0084061C18CF2F51E21128F590898510036AFFA4_H
#define BASESPATIALAWARENESSOBJECT_T0084061C18CF2F51E21128F590898510036AFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct  BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGameObjectU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRendererU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFilterU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESPATIALAWARENESSOBJECT_T0084061C18CF2F51E21128F590898510036AFFA4_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T8980FA0E6CB3848F706C43D859930435C34BCC37_H
#define LIST_1_T8980FA0E6CB3848F706C43D859930435C34BCC37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Single>
struct  List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T8980FA0E6CB3848F706C43D859930435C34BCC37_H
#ifndef LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#define LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_H
#ifndef LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#define LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifndef RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
#define RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F, ___SeedArray_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T18A28484F67EFA289C256F508A5C71D9E6DEE09F_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef U3CRELOCBYSIZEU3ED__11_TDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D_H
#define U3CRELOCBYSIZEU3ED__11_TDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// locateBySize_<ReLocBySize>d__11
struct  U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D  : public RuntimeObject
{
public:
	// System.Int32 locateBySize_<ReLocBySize>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object locateBySize_<ReLocBySize>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 locateBySize_<ReLocBySize>d__11::i
	int32_t ___i_2;
	// System.Int32 locateBySize_<ReLocBySize>d__11::j
	int32_t ___j_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> locateBySize_<ReLocBySize>d__11::obj
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> locateBySize_<ReLocBySize>d__11::pos
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_i_2() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___i_2)); }
	inline int32_t get_i_2() const { return ___i_2; }
	inline int32_t* get_address_of_i_2() { return &___i_2; }
	inline void set_i_2(int32_t value)
	{
		___i_2 = value;
	}

	inline static int32_t get_offset_of_j_3() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___j_3)); }
	inline int32_t get_j_3() const { return ___j_3; }
	inline int32_t* get_address_of_j_3() { return &___j_3; }
	inline void set_j_3(int32_t value)
	{
		___j_3 = value;
	}

	inline static int32_t get_offset_of_obj_4() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___obj_4)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_obj_4() const { return ___obj_4; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_obj_4() { return &___obj_4; }
	inline void set_obj_4(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___obj_4 = value;
		Il2CppCodeGenWriteBarrier((&___obj_4), value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D, ___pos_5)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_pos_5() const { return ___pos_5; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___pos_5 = value;
		Il2CppCodeGenWriteBarrier((&___pos_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRELOCBYSIZEU3ED__11_TDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D_H
#ifndef SPATIALAWARENESSMESHOBJECT_T8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_H
#define SPATIALAWARENESSMESHOBJECT_T8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct  SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E  : public BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CColliderU3Ek__BackingField_5), value);
	}
};

struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::requiredMeshComponents
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___requiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_requiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_StaticFields, ___requiredMeshComponents_4)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_requiredMeshComponents_4() const { return ___requiredMeshComponents_4; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_requiredMeshComponents_4() { return &___requiredMeshComponents_4; }
	inline void set_requiredMeshComponents_4(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___requiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((&___requiredMeshComponents_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALAWARENESSMESHOBJECT_T8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#define STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TFC50657DD5AAB87770987F9179D934A51D99D5E7_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef UNITYEVENT_2_T652BB56D3A70C4F3DB42D6CCD83473A98EE1860A_H
#define UNITYEVENT_2_T652BB56D3A70C4F3DB42D6CCD83473A98EE1860A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>
struct  UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T652BB56D3A70C4F3DB42D6CCD83473A98EE1860A_H
#ifndef UNITYEVENT_3_T3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930_H
#define UNITYEVENT_3_T3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930_H
#ifndef UNITYEVENT_3_TAE7658A358B3371B5E16C482CBFEB2A8125B4BF8_H
#define UNITYEVENT_3_TAE7658A358B3371B5E16C482CBFEB2A8125B4BF8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>
struct  UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_TAE7658A358B3371B5E16C482CBFEB2A8125B4BF8_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef FOCUSEVENTDATA_TAA6027DD2D26B76E035E11439D9663DB64860C2F_H
#define FOCUSEVENTDATA_TAA6027DD2D26B76E035E11439D9663DB64860C2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct  FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COldFocusedObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewFocusedObjectU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSEVENTDATA_TAA6027DD2D26B76E035E11439D9663DB64860C2F_H
#ifndef SPATIALAWARENESSMESHDISPLAYOPTIONS_T0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87_H
#define SPATIALAWARENESSMESHDISPLAYOPTIONS_T0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct  SpatialAwarenessMeshDisplayOptions_t0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALAWARENESSMESHDISPLAYOPTIONS_T0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87_H
#ifndef FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#define FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef CHARACTERSELECTIONEVENT_T346DE6835B0DF86A32928016EE2C413E919DBF90_H
#define CHARACTERSELECTIONEVENT_T346DE6835B0DF86A32928016EE2C413E919DBF90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler_CharacterSelectionEvent
struct  CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERSELECTIONEVENT_T346DE6835B0DF86A32928016EE2C413E919DBF90_H
#ifndef LINESELECTIONEVENT_T9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_H
#define LINESELECTIONEVENT_T9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler_LineSelectionEvent
struct  LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINESELECTIONEVENT_T9F223C373E9EF88E12570D86DE2651F8EDEEAB3F_H
#ifndef LINKSELECTIONEVENT_T61E2583194386CC362B13606ECE2F840876A24E8_H
#define LINKSELECTIONEVENT_T61E2583194386CC362B13606ECE2F840876A24E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler_LinkSelectionEvent
struct  LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8  : public UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSELECTIONEVENT_T61E2583194386CC362B13606ECE2F840876A24E8_H
#ifndef SPRITESELECTIONEVENT_TCE8FEB1D487ED84CBA38BC47F8949C5537672B32_H
#define SPRITESELECTIONEVENT_TCE8FEB1D487ED84CBA38BC47F8949C5537672B32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler_SpriteSelectionEvent
struct  SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32  : public UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITESELECTIONEVENT_TCE8FEB1D487ED84CBA38BC47F8949C5537672B32_H
#ifndef WORDSELECTIONEVENT_TF37108E717AF8FCEB63C4B4CB11231A5F030A554_H
#define WORDSELECTIONEVENT_TF37108E717AF8FCEB63C4B4CB11231A5F030A554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextEventHandler_WordSelectionEvent
struct  WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554  : public UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSELECTIONEVENT_TF37108E717AF8FCEB63C4B4CB11231A5F030A554_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#define PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T37F0056BA9C61594039522E27426D4D52D0943DE_H
#ifndef RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#define RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifndef SCALEMODE_T38950B182EA5E1C8589AB5E02F36FEABB8A5CAA6_H
#define SCALEMODE_T38950B182EA5E1C8589AB5E02F36FEABB8A5CAA6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler_ScaleMode
struct  ScaleMode_t38950B182EA5E1C8589AB5E02F36FEABB8A5CAA6 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler_ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t38950B182EA5E1C8589AB5E02F36FEABB8A5CAA6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCALEMODE_T38950B182EA5E1C8589AB5E02F36FEABB8A5CAA6_H
#ifndef SCREENMATCHMODE_T61C3A62F8F54F705D47C2C37B06DC8083238C133_H
#define SCREENMATCHMODE_T61C3A62F8F54F705D47C2C37B06DC8083238C133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler_ScreenMatchMode
struct  ScreenMatchMode_t61C3A62F8F54F705D47C2C37B06DC8083238C133 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler_ScreenMatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenMatchMode_t61C3A62F8F54F705D47C2C37B06DC8083238C133, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENMATCHMODE_T61C3A62F8F54F705D47C2C37B06DC8083238C133_H
#ifndef UNIT_TD24A4DB24016D1A6B46579640E170359F76F8313_H
#define UNIT_TD24A4DB24016D1A6B46579640E170359F76F8313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler_Unit
struct  Unit_tD24A4DB24016D1A6B46579640E170359F76F8313 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler_Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_tD24A4DB24016D1A6B46579640E170359F76F8313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIT_TD24A4DB24016D1A6B46579640E170359F76F8313_H
#ifndef BLOCKINGOBJECTS_TFC334A7FDC8003C26A58D8FF24EDD045C49F9E23_H
#define BLOCKINGOBJECTS_TFC334A7FDC8003C26A58D8FF24EDD045C49F9E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GraphicRaycaster_BlockingObjects
struct  BlockingObjects_tFC334A7FDC8003C26A58D8FF24EDD045C49F9E23 
{
public:
	// System.Int32 UnityEngine.UI.GraphicRaycaster_BlockingObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockingObjects_tFC334A7FDC8003C26A58D8FF24EDD045C49F9E23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKINGOBJECTS_TFC334A7FDC8003C26A58D8FF24EDD045C49F9E23_H
#ifndef FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#define FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_8)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_TA770BF9AF0906644D43C81B962C7DBC3BC79A418_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#define FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.Font_FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#define MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_TF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_H
#ifndef MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#define MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T6106B8D8E4C691321581AB0445552EC78B947B8C_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#define MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#define CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifndef MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#define MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T9D67CA54E83315F743623BDE8EADCD5074659EED_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef WORLDANCHORMANAGER_TEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE_H
#define WORLDANCHORMANAGER_TEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager
struct  WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::anchorDebugText
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___anchorDebugText_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::showDetailedLogs
	bool ___showDetailedLogs_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::persistentAnchors
	bool ___persistentAnchors_6;
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::<AnchorStore>k__BackingField
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___U3CAnchorStoreU3Ek__BackingField_7;
	// System.Collections.Generic.Queue`1<Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager_AnchorAttachmentInfo> Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::LocalAnchorOperations
	Queue_1_t8161E7C25064EDAC6A80F5B4E50A45135CE4D5AF * ___LocalAnchorOperations_8;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::AnchorGameObjectReferenceList
	Dictionary_2_tB917211DA126597937FC7D5AF12A9E1B7A763F6A * ___AnchorGameObjectReferenceList_9;

public:
	inline static int32_t get_offset_of_anchorDebugText_4() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___anchorDebugText_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_anchorDebugText_4() const { return ___anchorDebugText_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_anchorDebugText_4() { return &___anchorDebugText_4; }
	inline void set_anchorDebugText_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___anchorDebugText_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorDebugText_4), value);
	}

	inline static int32_t get_offset_of_showDetailedLogs_5() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___showDetailedLogs_5)); }
	inline bool get_showDetailedLogs_5() const { return ___showDetailedLogs_5; }
	inline bool* get_address_of_showDetailedLogs_5() { return &___showDetailedLogs_5; }
	inline void set_showDetailedLogs_5(bool value)
	{
		___showDetailedLogs_5 = value;
	}

	inline static int32_t get_offset_of_persistentAnchors_6() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___persistentAnchors_6)); }
	inline bool get_persistentAnchors_6() const { return ___persistentAnchors_6; }
	inline bool* get_address_of_persistentAnchors_6() { return &___persistentAnchors_6; }
	inline void set_persistentAnchors_6(bool value)
	{
		___persistentAnchors_6 = value;
	}

	inline static int32_t get_offset_of_U3CAnchorStoreU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___U3CAnchorStoreU3Ek__BackingField_7)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_U3CAnchorStoreU3Ek__BackingField_7() const { return ___U3CAnchorStoreU3Ek__BackingField_7; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_U3CAnchorStoreU3Ek__BackingField_7() { return &___U3CAnchorStoreU3Ek__BackingField_7; }
	inline void set_U3CAnchorStoreU3Ek__BackingField_7(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___U3CAnchorStoreU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAnchorStoreU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_LocalAnchorOperations_8() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___LocalAnchorOperations_8)); }
	inline Queue_1_t8161E7C25064EDAC6A80F5B4E50A45135CE4D5AF * get_LocalAnchorOperations_8() const { return ___LocalAnchorOperations_8; }
	inline Queue_1_t8161E7C25064EDAC6A80F5B4E50A45135CE4D5AF ** get_address_of_LocalAnchorOperations_8() { return &___LocalAnchorOperations_8; }
	inline void set_LocalAnchorOperations_8(Queue_1_t8161E7C25064EDAC6A80F5B4E50A45135CE4D5AF * value)
	{
		___LocalAnchorOperations_8 = value;
		Il2CppCodeGenWriteBarrier((&___LocalAnchorOperations_8), value);
	}

	inline static int32_t get_offset_of_AnchorGameObjectReferenceList_9() { return static_cast<int32_t>(offsetof(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE, ___AnchorGameObjectReferenceList_9)); }
	inline Dictionary_2_tB917211DA126597937FC7D5AF12A9E1B7A763F6A * get_AnchorGameObjectReferenceList_9() const { return ___AnchorGameObjectReferenceList_9; }
	inline Dictionary_2_tB917211DA126597937FC7D5AF12A9E1B7A763F6A ** get_address_of_AnchorGameObjectReferenceList_9() { return &___AnchorGameObjectReferenceList_9; }
	inline void set_AnchorGameObjectReferenceList_9(Dictionary_2_tB917211DA126597937FC7D5AF12A9E1B7A763F6A * value)
	{
		___AnchorGameObjectReferenceList_9 = value;
		Il2CppCodeGenWriteBarrier((&___AnchorGameObjectReferenceList_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORLDANCHORMANAGER_TEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE_H
#ifndef TEXTBACKGROUND_T90D4E18335CE278FDE660D93AD28B7E8B89E52BD_H
#define TEXTBACKGROUND_T90D4E18335CE278FDE660D93AD28B7E8B89E52BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextBackground
struct  TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.RectTransform TextBackground::uiText
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___uiText_4;
	// UnityEngine.RectTransform TextBackground::uiImage
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___uiImage_5;
	// UnityEngine.Vector2 TextBackground::position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position_6;

public:
	inline static int32_t get_offset_of_uiText_4() { return static_cast<int32_t>(offsetof(TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD, ___uiText_4)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_uiText_4() const { return ___uiText_4; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_uiText_4() { return &___uiText_4; }
	inline void set_uiText_4(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___uiText_4 = value;
		Il2CppCodeGenWriteBarrier((&___uiText_4), value);
	}

	inline static int32_t get_offset_of_uiImage_5() { return static_cast<int32_t>(offsetof(TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD, ___uiImage_5)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_uiImage_5() const { return ___uiImage_5; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_uiImage_5() { return &___uiImage_5; }
	inline void set_uiImage_5(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___uiImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___uiImage_5), value);
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD, ___position_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_position_6() const { return ___position_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___position_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTBACKGROUND_T90D4E18335CE278FDE660D93AD28B7E8B89E52BD_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef ANCHORWITHOUTSPEECH_T25BA85CD8FF6069BE2460358D28714EB052B3843_H
#define ANCHORWITHOUTSPEECH_T25BA85CD8FF6069BE2460358D28714EB052B3843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// anchorWithoutSpeech
struct  anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager anchorWithoutSpeech::worldAnchorMg
	WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE * ___worldAnchorMg_4;
	// UnityEngine.GameObject anchorWithoutSpeech::gameObjectToAnchor
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObjectToAnchor_5;

public:
	inline static int32_t get_offset_of_worldAnchorMg_4() { return static_cast<int32_t>(offsetof(anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843, ___worldAnchorMg_4)); }
	inline WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE * get_worldAnchorMg_4() const { return ___worldAnchorMg_4; }
	inline WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE ** get_address_of_worldAnchorMg_4() { return &___worldAnchorMg_4; }
	inline void set_worldAnchorMg_4(WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE * value)
	{
		___worldAnchorMg_4 = value;
		Il2CppCodeGenWriteBarrier((&___worldAnchorMg_4), value);
	}

	inline static int32_t get_offset_of_gameObjectToAnchor_5() { return static_cast<int32_t>(offsetof(anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843, ___gameObjectToAnchor_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameObjectToAnchor_5() const { return ___gameObjectToAnchor_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameObjectToAnchor_5() { return &___gameObjectToAnchor_5; }
	inline void set_gameObjectToAnchor_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameObjectToAnchor_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameObjectToAnchor_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORWITHOUTSPEECH_T25BA85CD8FF6069BE2460358D28714EB052B3843_H
#ifndef CALLLBS_TFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55_H
#define CALLLBS_TFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// callLBS
struct  callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// locateBySize callLBS::lbs
	locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * ___lbs_4;

public:
	inline static int32_t get_offset_of_lbs_4() { return static_cast<int32_t>(offsetof(callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55, ___lbs_4)); }
	inline locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * get_lbs_4() const { return ___lbs_4; }
	inline locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B ** get_address_of_lbs_4() { return &___lbs_4; }
	inline void set_lbs_4(locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * value)
	{
		___lbs_4 = value;
		Il2CppCodeGenWriteBarrier((&___lbs_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLLBS_TFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55_H
#ifndef CREATECANVASOBJS_T390E424E42AF14ECF05B884E1B089E91732034D8_H
#define CREATECANVASOBJS_T390E424E42AF14ECF05B884E1B089E91732034D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// createCanvasObjs
struct  createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Font createCanvasObjs::myfont
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___myfont_4;

public:
	inline static int32_t get_offset_of_myfont_4() { return static_cast<int32_t>(offsetof(createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8, ___myfont_4)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_myfont_4() const { return ___myfont_4; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_myfont_4() { return &___myfont_4; }
	inline void set_myfont_4(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___myfont_4 = value;
		Il2CppCodeGenWriteBarrier((&___myfont_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATECANVASOBJS_T390E424E42AF14ECF05B884E1B089E91732034D8_H
#ifndef CREATEOBJ_T3896CA6E5333F95644DBE422D43B6AA4B56E7AEE_H
#define CREATEOBJ_T3896CA6E5333F95644DBE422D43B6AA4B56E7AEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// createObj
struct  createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject createObj::LandmarkToSpawn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___LandmarkToSpawn_4;
	// UnityEngine.GameObject createObj::ArrowToSpawn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ArrowToSpawn_5;
	// UnityEngine.Vector3 createObj::InitialPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___InitialPosition_6;
	// UnityEngine.GameObject createObj::NewLandmark
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___NewLandmark_7;
	// UnityEngine.GameObject createObj::parentObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___parentObject_8;

public:
	inline static int32_t get_offset_of_LandmarkToSpawn_4() { return static_cast<int32_t>(offsetof(createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE, ___LandmarkToSpawn_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_LandmarkToSpawn_4() const { return ___LandmarkToSpawn_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_LandmarkToSpawn_4() { return &___LandmarkToSpawn_4; }
	inline void set_LandmarkToSpawn_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___LandmarkToSpawn_4 = value;
		Il2CppCodeGenWriteBarrier((&___LandmarkToSpawn_4), value);
	}

	inline static int32_t get_offset_of_ArrowToSpawn_5() { return static_cast<int32_t>(offsetof(createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE, ___ArrowToSpawn_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ArrowToSpawn_5() const { return ___ArrowToSpawn_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ArrowToSpawn_5() { return &___ArrowToSpawn_5; }
	inline void set_ArrowToSpawn_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ArrowToSpawn_5 = value;
		Il2CppCodeGenWriteBarrier((&___ArrowToSpawn_5), value);
	}

	inline static int32_t get_offset_of_InitialPosition_6() { return static_cast<int32_t>(offsetof(createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE, ___InitialPosition_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_InitialPosition_6() const { return ___InitialPosition_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_InitialPosition_6() { return &___InitialPosition_6; }
	inline void set_InitialPosition_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___InitialPosition_6 = value;
	}

	inline static int32_t get_offset_of_NewLandmark_7() { return static_cast<int32_t>(offsetof(createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE, ___NewLandmark_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_NewLandmark_7() const { return ___NewLandmark_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_NewLandmark_7() { return &___NewLandmark_7; }
	inline void set_NewLandmark_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___NewLandmark_7 = value;
		Il2CppCodeGenWriteBarrier((&___NewLandmark_7), value);
	}

	inline static int32_t get_offset_of_parentObject_8() { return static_cast<int32_t>(offsetof(createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE, ___parentObject_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_parentObject_8() const { return ___parentObject_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_parentObject_8() { return &___parentObject_8; }
	inline void set_parentObject_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___parentObject_8 = value;
		Il2CppCodeGenWriteBarrier((&___parentObject_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEOBJ_T3896CA6E5333F95644DBE422D43B6AA4B56E7AEE_H
#ifndef LOCATEBYSIZE_T3CA3E86512892D3D0C68B005F545040239F1FF4B_H
#define LOCATEBYSIZE_T3CA3E86512892D3D0C68B005F545040239F1FF4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// locateBySize
struct  locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject locateBySize::test
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___test_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> locateBySize::obj
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> locateBySize::pos
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos_6;

public:
	inline static int32_t get_offset_of_test_4() { return static_cast<int32_t>(offsetof(locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B, ___test_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_test_4() const { return ___test_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_test_4() { return &___test_4; }
	inline void set_test_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___test_4 = value;
		Il2CppCodeGenWriteBarrier((&___test_4), value);
	}

	inline static int32_t get_offset_of_obj_5() { return static_cast<int32_t>(offsetof(locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B, ___obj_5)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_obj_5() const { return ___obj_5; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_obj_5() { return &___obj_5; }
	inline void set_obj_5(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___obj_5 = value;
		Il2CppCodeGenWriteBarrier((&___obj_5), value);
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B, ___pos_6)); }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * get_pos_6() const { return ___pos_6; }
	inline List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 ** get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * value)
	{
		___pos_6 = value;
		Il2CppCodeGenWriteBarrier((&___pos_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCATEBYSIZE_T3CA3E86512892D3D0C68B005F545040239F1FF4B_H
#ifndef LOGEYEMOVEMENTDATA_T8B7B48DD1198A1362577BFFC4E000BF10A53C151_H
#define LOGEYEMOVEMENTDATA_T8B7B48DD1198A1362577BFFC4E000BF10A53C151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// logEyeMovementData
struct  logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider logEyeMovementData::eyeTrackingProvider
	RuntimeObject* ___eyeTrackingProvider_4;

public:
	inline static int32_t get_offset_of_eyeTrackingProvider_4() { return static_cast<int32_t>(offsetof(logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151, ___eyeTrackingProvider_4)); }
	inline RuntimeObject* get_eyeTrackingProvider_4() const { return ___eyeTrackingProvider_4; }
	inline RuntimeObject** get_address_of_eyeTrackingProvider_4() { return &___eyeTrackingProvider_4; }
	inline void set_eyeTrackingProvider_4(RuntimeObject* value)
	{
		___eyeTrackingProvider_4 = value;
		Il2CppCodeGenWriteBarrier((&___eyeTrackingProvider_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGEYEMOVEMENTDATA_T8B7B48DD1198A1362577BFFC4E000BF10A53C151_H
#ifndef RELOCATEOBJ_T45183B27C22BE51A826139EBE3750C49696C77A6_H
#define RELOCATEOBJ_T45183B27C22BE51A826139EBE3750C49696C77A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// reLocateObj
struct  reLocateObj_t45183B27C22BE51A826139EBE3750C49696C77A6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELOCATEOBJ_T45183B27C22BE51A826139EBE3750C49696C77A6_H
#ifndef SHOWEYEGAZEINFO_T34F1FC28122E5FA69FC4AB6D43E17B859796810E_H
#define SHOWEYEGAZEINFO_T34F1FC28122E5FA69FC4AB6D43E17B859796810E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// showEyeGazeinfo
struct  showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String[] showEyeGazeinfo::eyeGazeData
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___eyeGazeData_4;
	// System.String showEyeGazeinfo::eyeGazeData2show
	String_t* ___eyeGazeData2show_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider showEyeGazeinfo::EyeGazeProvider
	RuntimeObject* ___EyeGazeProvider_6;

public:
	inline static int32_t get_offset_of_eyeGazeData_4() { return static_cast<int32_t>(offsetof(showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E, ___eyeGazeData_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_eyeGazeData_4() const { return ___eyeGazeData_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_eyeGazeData_4() { return &___eyeGazeData_4; }
	inline void set_eyeGazeData_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___eyeGazeData_4 = value;
		Il2CppCodeGenWriteBarrier((&___eyeGazeData_4), value);
	}

	inline static int32_t get_offset_of_eyeGazeData2show_5() { return static_cast<int32_t>(offsetof(showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E, ___eyeGazeData2show_5)); }
	inline String_t* get_eyeGazeData2show_5() const { return ___eyeGazeData2show_5; }
	inline String_t** get_address_of_eyeGazeData2show_5() { return &___eyeGazeData2show_5; }
	inline void set_eyeGazeData2show_5(String_t* value)
	{
		___eyeGazeData2show_5 = value;
		Il2CppCodeGenWriteBarrier((&___eyeGazeData2show_5), value);
	}

	inline static int32_t get_offset_of_EyeGazeProvider_6() { return static_cast<int32_t>(offsetof(showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E, ___EyeGazeProvider_6)); }
	inline RuntimeObject* get_EyeGazeProvider_6() const { return ___EyeGazeProvider_6; }
	inline RuntimeObject** get_address_of_EyeGazeProvider_6() { return &___EyeGazeProvider_6; }
	inline void set_EyeGazeProvider_6(RuntimeObject* value)
	{
		___EyeGazeProvider_6 = value;
		Il2CppCodeGenWriteBarrier((&___EyeGazeProvider_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWEYEGAZEINFO_T34F1FC28122E5FA69FC4AB6D43E17B859796810E_H
#ifndef TURNONOROFF_T1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9_H
#define TURNONOROFF_T1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// turnOnOrOff
struct  turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject turnOnOrOff::ObjectToBeHide
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ObjectToBeHide_4;

public:
	inline static int32_t get_offset_of_ObjectToBeHide_4() { return static_cast<int32_t>(offsetof(turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9, ___ObjectToBeHide_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_ObjectToBeHide_4() const { return ___ObjectToBeHide_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_ObjectToBeHide_4() { return &___ObjectToBeHide_4; }
	inline void set_ObjectToBeHide_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___ObjectToBeHide_4 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeHide_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNONOROFF_T1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9_H
#ifndef USESPATIALMAPPINGDATA_T09391CA051AA14C8C114E0514F9C9496704357D7_H
#define USESPATIALMAPPINGDATA_T09391CA051AA14C8C114E0514F9C9496704357D7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// useSpatialMappingData
struct  useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Mesh useSpatialMappingData::meshContainer
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___meshContainer_4;

public:
	inline static int32_t get_offset_of_meshContainer_4() { return static_cast<int32_t>(offsetof(useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7, ___meshContainer_4)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_meshContainer_4() const { return ___meshContainer_4; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_meshContainer_4() { return &___meshContainer_4; }
	inline void set_meshContainer_4(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___meshContainer_4 = value;
		Il2CppCodeGenWriteBarrier((&___meshContainer_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USESPATIALMAPPINGDATA_T09391CA051AA14C8C114E0514F9C9496704357D7_H
#ifndef VISIBLEAREA_T4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57_H
#define VISIBLEAREA_T4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// visibleArea
struct  visibleArea_t4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBLEAREA_T4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57_H
#ifndef BASERAYCASTER_TC7F6105A89F54A38FBFC2659901855FDBB0E3966_H
#define BASERAYCASTER_TC7F6105A89F54A38FBFC2659901855FDBB0E3966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseRaycaster
struct  BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASERAYCASTER_TC7F6105A89F54A38FBFC2659901855FDBB0E3966_H
#ifndef CANVASSCALER_T304BA6F47EDB7402EBA405DD36CA7D6ADF723564_H
#define CANVASSCALER_T304BA6F47EDB7402EBA405DD36CA7D6ADF723564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler
struct  CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.CanvasScaler_ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler_ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler_Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;

public:
	inline static int32_t get_offset_of_m_UiScaleMode_4() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_UiScaleMode_4)); }
	inline int32_t get_m_UiScaleMode_4() const { return ___m_UiScaleMode_4; }
	inline int32_t* get_address_of_m_UiScaleMode_4() { return &___m_UiScaleMode_4; }
	inline void set_m_UiScaleMode_4(int32_t value)
	{
		___m_UiScaleMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ReferencePixelsPerUnit_5() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_ReferencePixelsPerUnit_5)); }
	inline float get_m_ReferencePixelsPerUnit_5() const { return ___m_ReferencePixelsPerUnit_5; }
	inline float* get_address_of_m_ReferencePixelsPerUnit_5() { return &___m_ReferencePixelsPerUnit_5; }
	inline void set_m_ReferencePixelsPerUnit_5(float value)
	{
		___m_ReferencePixelsPerUnit_5 = value;
	}

	inline static int32_t get_offset_of_m_ScaleFactor_6() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_ScaleFactor_6)); }
	inline float get_m_ScaleFactor_6() const { return ___m_ScaleFactor_6; }
	inline float* get_address_of_m_ScaleFactor_6() { return &___m_ScaleFactor_6; }
	inline void set_m_ScaleFactor_6(float value)
	{
		___m_ScaleFactor_6 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceResolution_7() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_ReferenceResolution_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_ReferenceResolution_7() const { return ___m_ReferenceResolution_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_ReferenceResolution_7() { return &___m_ReferenceResolution_7; }
	inline void set_m_ReferenceResolution_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_ReferenceResolution_7 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMatchMode_8() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_ScreenMatchMode_8)); }
	inline int32_t get_m_ScreenMatchMode_8() const { return ___m_ScreenMatchMode_8; }
	inline int32_t* get_address_of_m_ScreenMatchMode_8() { return &___m_ScreenMatchMode_8; }
	inline void set_m_ScreenMatchMode_8(int32_t value)
	{
		___m_ScreenMatchMode_8 = value;
	}

	inline static int32_t get_offset_of_m_MatchWidthOrHeight_9() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_MatchWidthOrHeight_9)); }
	inline float get_m_MatchWidthOrHeight_9() const { return ___m_MatchWidthOrHeight_9; }
	inline float* get_address_of_m_MatchWidthOrHeight_9() { return &___m_MatchWidthOrHeight_9; }
	inline void set_m_MatchWidthOrHeight_9(float value)
	{
		___m_MatchWidthOrHeight_9 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalUnit_11() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_PhysicalUnit_11)); }
	inline int32_t get_m_PhysicalUnit_11() const { return ___m_PhysicalUnit_11; }
	inline int32_t* get_address_of_m_PhysicalUnit_11() { return &___m_PhysicalUnit_11; }
	inline void set_m_PhysicalUnit_11(int32_t value)
	{
		___m_PhysicalUnit_11 = value;
	}

	inline static int32_t get_offset_of_m_FallbackScreenDPI_12() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_FallbackScreenDPI_12)); }
	inline float get_m_FallbackScreenDPI_12() const { return ___m_FallbackScreenDPI_12; }
	inline float* get_address_of_m_FallbackScreenDPI_12() { return &___m_FallbackScreenDPI_12; }
	inline void set_m_FallbackScreenDPI_12(float value)
	{
		___m_FallbackScreenDPI_12 = value;
	}

	inline static int32_t get_offset_of_m_DefaultSpriteDPI_13() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_DefaultSpriteDPI_13)); }
	inline float get_m_DefaultSpriteDPI_13() const { return ___m_DefaultSpriteDPI_13; }
	inline float* get_address_of_m_DefaultSpriteDPI_13() { return &___m_DefaultSpriteDPI_13; }
	inline void set_m_DefaultSpriteDPI_13(float value)
	{
		___m_DefaultSpriteDPI_13 = value;
	}

	inline static int32_t get_offset_of_m_DynamicPixelsPerUnit_14() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_DynamicPixelsPerUnit_14)); }
	inline float get_m_DynamicPixelsPerUnit_14() const { return ___m_DynamicPixelsPerUnit_14; }
	inline float* get_address_of_m_DynamicPixelsPerUnit_14() { return &___m_DynamicPixelsPerUnit_14; }
	inline void set_m_DynamicPixelsPerUnit_14(float value)
	{
		___m_DynamicPixelsPerUnit_14 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_Canvas_15)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_15), value);
	}

	inline static int32_t get_offset_of_m_PrevScaleFactor_16() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_PrevScaleFactor_16)); }
	inline float get_m_PrevScaleFactor_16() const { return ___m_PrevScaleFactor_16; }
	inline float* get_address_of_m_PrevScaleFactor_16() { return &___m_PrevScaleFactor_16; }
	inline void set_m_PrevScaleFactor_16(float value)
	{
		___m_PrevScaleFactor_16 = value;
	}

	inline static int32_t get_offset_of_m_PrevReferencePixelsPerUnit_17() { return static_cast<int32_t>(offsetof(CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564, ___m_PrevReferencePixelsPerUnit_17)); }
	inline float get_m_PrevReferencePixelsPerUnit_17() const { return ___m_PrevReferencePixelsPerUnit_17; }
	inline float* get_address_of_m_PrevReferencePixelsPerUnit_17() { return &___m_PrevReferencePixelsPerUnit_17; }
	inline void set_m_PrevReferencePixelsPerUnit_17(float value)
	{
		___m_PrevReferencePixelsPerUnit_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASSCALER_T304BA6F47EDB7402EBA405DD36CA7D6ADF723564_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef GRAPHICRAYCASTER_T9AA334998113578A7FC0B27D7D6FEF19E74B9D83_H
#define GRAPHICRAYCASTER_T9AA334998113578A7FC0B27D7D6FEF19E74B9D83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83  : public BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_5;
	// UnityEngine.UI.GraphicRaycaster_BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_6;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___m_BlockingMask_7;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * ___m_RaycastResults_9;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_5() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_IgnoreReversedGraphics_5)); }
	inline bool get_m_IgnoreReversedGraphics_5() const { return ___m_IgnoreReversedGraphics_5; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_5() { return &___m_IgnoreReversedGraphics_5; }
	inline void set_m_IgnoreReversedGraphics_5(bool value)
	{
		___m_IgnoreReversedGraphics_5 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_BlockingObjects_6)); }
	inline int32_t get_m_BlockingObjects_6() const { return ___m_BlockingObjects_6; }
	inline int32_t* get_address_of_m_BlockingObjects_6() { return &___m_BlockingObjects_6; }
	inline void set_m_BlockingObjects_6(int32_t value)
	{
		___m_BlockingObjects_6 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_BlockingMask_7)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_m_BlockingMask_7() const { return ___m_BlockingMask_7; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_m_BlockingMask_7() { return &___m_BlockingMask_7; }
	inline void set_m_BlockingMask_7(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___m_BlockingMask_7 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_Canvas_8)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_8() const { return ___m_Canvas_8; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_8() { return &___m_Canvas_8; }
	inline void set_m_Canvas_8(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_8), value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_RaycastResults_9)); }
	inline List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * get_m_RaycastResults_9() const { return ___m_RaycastResults_9; }
	inline List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 ** get_address_of_m_RaycastResults_9() { return &___m_RaycastResults_9; }
	inline void set_m_RaycastResults_9(List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * value)
	{
		___m_RaycastResults_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResults_9), value);
	}
};

struct GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * ___s_SortedGraphics_10;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__amU24cache0
	Comparison_1_t5031A3D1172F5D774E43B5AE7EF4F0F79CE5796A * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_10() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_StaticFields, ___s_SortedGraphics_10)); }
	inline List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * get_s_SortedGraphics_10() const { return ___s_SortedGraphics_10; }
	inline List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 ** get_address_of_s_SortedGraphics_10() { return &___s_SortedGraphics_10; }
	inline void set_s_SortedGraphics_10(List_1_t5DB49737D499F93016BB3E3D19278B515B1272E6 * value)
	{
		___s_SortedGraphics_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_SortedGraphics_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Comparison_1_t5031A3D1172F5D774E43B5AE7EF4F0F79CE5796A * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Comparison_1_t5031A3D1172F5D774E43B5AE7EF4F0F79CE5796A ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Comparison_1_t5031A3D1172F5D774E43B5AE7EF4F0F79CE5796A * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICRAYCASTER_T9AA334998113578A7FC0B27D7D6FEF19E74B9D83_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared (UnityEvent_3_tFC992AA557296F35E887CA6A6D486BAD05CBE7E8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared (UnityEvent_3_tBDBEEB66A13CAD2A4067CE23F6BE52B4CEE94E15 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7_gshared (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E_gshared (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, float p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_gshared (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`2<System.Char,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445 (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t652BB56D3A70C4F3DB42D6CCD83473A98EE1860A *, const RuntimeMethod*))UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713 (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_t3CDB5DD99C7FB23EFDB392344A499C4B6EEC5930 *, const RuntimeMethod*))UnityEvent_3__ctor_mDAFC5615641C9252BAA08BCCC90C90101C91603A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.String,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tAE7658A358B3371B5E16C482CBFEB2A8125B4BF8 *, const RuntimeMethod*))UnityEvent_3__ctor_mF6A34E6243359342CE52C9E31132478CA9BA73AD_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Experimental.Utilities.WorldAnchorManager::AttachAnchor(UnityEngine.GameObject,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WorldAnchorManager_AttachAnchor_m680235CB55D49814A6B7342DB2E351EAB4EDDAE7 (WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<locateBySize>()
inline locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * GameObject_AddComponent_TislocateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B_m6B93CD20E60B1DC6DB6CEA4A54C5AEA1DEF6F508 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void locateBySize::createStart()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_createStart_m2F3FD1ED8FDD052FD68E7A6EF4F418F668F54452 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method);
// System.Void locateBySize::Update()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_Update_mE658382F13AAF9DC3EF3F1DEFFA150A18DB671FC (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<UnityEngine.Font>(System.String)
inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * Resources_Load_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_m9D478BB73C8B7721C029E0C5F171A0E559356FC0 (String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m5DBFEC24E0DC9FC8734E858A489BC7B8B64B0BFF_gshared)(p0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_AddComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD68D831E57A2A547C0F45127896158954FDE8685 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m2FD9CC1491B61A8BD35D12587774F460F98D4AB6 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
extern "C" IL2CPP_METHOD_ATTR void Canvas_set_renderMode_m0AF240B53EB3B619DABA121213A162230EB84203 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564 * GameObject_AddComponent_TisCanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564_m37701F5F2F4E14F68C7BED5E3642D1A8E4D80967 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.GraphicRaycaster>()
inline GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * GameObject_AddComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_mB3D221D6581013B31743459A5487828980579434 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_AddComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m498C8BF6CD94A03A981AE236A616912C7B68BDA9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void Text_set_font_mD3CE7BCE58B5B0C3CBE51CE1AC74CBA662DFCF5C (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * __this, Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Text_set_fontSize_m02F0192F052A3815C17428F4C2BE51A03B3E15B7 (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void createCanvasObjs::createCanvas()
extern "C" IL2CPP_METHOD_ATTR void createCanvasObjs_createCanvas_mD1230A4121A8339F04519F4CF613269BD3A06A1A (createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Vector3> locateBySize::PosCreate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * locateBySize_PosCreate_m6741E14EF1A9A29FF674D40E51F57289A2B69438 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.GameObject> locateBySize::ObjCreate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * locateBySize_ObjCreate_mDB3B4D833622EA82CE3C717AF33AAF220C48DC86 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void locateBySize::LocateObj(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR void locateBySize_LocateObj_m70AEEFADA5390AD8816C9EBE3D96F0D98AA81EF2 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos1, const RuntimeMethod* method);
// System.Void locateBySize::SizeSort(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void locateBySize_SizeSort_mF29C1524B54AEE2FCDF82983FBFC5F0D2BDC0099 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7 (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, const RuntimeMethod*))List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Random::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2 (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::Add(!0)
inline void List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, float p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, float, const RuntimeMethod*))List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E_gshared)(__this, p0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2 (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *, int32_t, const RuntimeMethod*))List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Collections.IEnumerator locateBySize::ReLocBySize(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* locateBySize_ReLocBySize_m2E14E85CFCCF314EFA26ED974BEA80668A770520 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void locateBySize/<ReLocBySize>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CReLocBySizeU3Ed__11__ctor_m7BA82CDB5866D752630A9EFA56852ED069261D68 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6 (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * __this, int32_t p0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *, int32_t, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_set_Item_m451452782977192583A6374A799099FCCD9BD83E_gshared)(__this, p0, p1, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8 (const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* p0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllText_m7BA355E5631C6A3E3D3378D6101EF65E72A45F0A (String_t* p0, String_t* p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider logEyeMovementData::get_EyeGazeProvider()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF (logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DateTime_ToString_mBB245CB189C10659D35E8E273FB03E34EA1A7122 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.IO.File::AppendAllText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void File_AppendAllText_m75D2FA3AD52D413CFC2DC07DC81A2BDF70ADE577 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SpatialAwarenessSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SpatialAwarenessSystem_m200A074E9F783A90A1CE486899A30CE2F46F1B9D (const RuntimeMethod* method);
// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_Filter()
extern "C" IL2CPP_METHOD_ATTR MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * BaseSpatialAwarenessObject_get_Filter_mDE7EB88ACCF233A49A70BCB2FBEF04675756C554 (BaseSpatialAwarenessObject_t0084061C18CF2F51E21128F590898510036AFFA4 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler_CharacterSelectionEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85 (CharacterSelectionEvent_t346DE6835B0DF86A32928016EE2C413E919DBF90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterSelectionEvent__ctor_m036DA7F340B0839696EB50045AB186BD1046BE85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler_LineSelectionEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2 (LineSelectionEvent_t9F223C373E9EF88E12570D86DE2651F8EDEEAB3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LineSelectionEvent__ctor_m1C3A0C84C5C0FEA6C33FA9ED99756A85363C9EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler_LinkSelectionEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A (LinkSelectionEvent_t61E2583194386CC362B13606ECE2F840876A24E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LinkSelectionEvent__ctor_mC7034F51586C51D1DE381F6222816DC1542AFF3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E(__this, /*hidden argument*/UnityEvent_3__ctor_m077EFE26C9D480C5A721A01FD53F1D3189FB407E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler_SpriteSelectionEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052 (SpriteSelectionEvent_tCE8FEB1D487ED84CBA38BC47F8949C5537672B32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteSelectionEvent__ctor_m0BC042938C4EBBB77FFAD68C1ACD74FC1C3C1052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445(__this, /*hidden argument*/UnityEvent_2__ctor_m8527791E9D668B0CE1D6A8F6DFD134DBEE8D0445_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_TextEventHandler_WordSelectionEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA (WordSelectionEvent_tF37108E717AF8FCEB63C4B4CB11231A5F030A554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WordSelectionEvent__ctor_m1C01733FD9860337084DFE63607ECE0EF8A450EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713(__this, /*hidden argument*/UnityEvent_3__ctor_m2B3ACFAA04EE3B8B19C0774ABE9F4511BD871713_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextBackground::Start()
extern "C" IL2CPP_METHOD_ATTR void TextBackground_Start_mC58995547B88ECBEDEA73255C75B6049D96D7D86 (TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextBackground_Start_mC58995547B88ECBEDEA73255C75B6049D96D7D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// uiImage = GameObject.Find("TestWindow").GetComponent<RectTransform>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE1F98DE2B8A7D8728701D49A67C3542B68202DB8, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m43C07809909DE265C356A2CD8E8B290E74E2EFC7_RuntimeMethod_var);
		__this->set_uiImage_5(L_1);
		// }
		return;
	}
}
// System.Void TextBackground::Update()
extern "C" IL2CPP_METHOD_ATTR void TextBackground_Update_m2BDC03B9A6DD7A33DABA4AE1F99D2D8C1998B5A0 (TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD * __this, const RuntimeMethod* method)
{
	{
		// position.x = uiText.sizeDelta.x + 10f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_position_6();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_1 = __this->get_uiText_4();
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		L_0->set_x_0(((float)il2cpp_codegen_add((float)L_3, (float)(10.0f))));
		// position.y = uiText.sizeDelta.y + 5f;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = __this->get_address_of_position_6();
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = __this->get_uiText_4();
		NullCheck(L_5);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_1();
		L_4->set_y_1(((float)il2cpp_codegen_add((float)L_7, (float)(5.0f))));
		// uiImage.sizeDelta = position;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_uiImage_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = __this->get_position_6();
		NullCheck(L_8);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextBackground::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextBackground__ctor_mC475E42CC5DFDE50CCA74799222557C9A5F93C7E (TextBackground_t90D4E18335CE278FDE660D93AD28B7E8B89E52BD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void anchorWithoutSpeech::Start()
extern "C" IL2CPP_METHOD_ATTR void anchorWithoutSpeech_Start_m7925B84DBB20997C17023769C863CBEDEDF73852 (anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843 * __this, const RuntimeMethod* method)
{
	{
		// gameObjectToAnchor = this.gameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		__this->set_gameObjectToAnchor_5(L_0);
		// }
		return;
	}
}
// System.Void anchorWithoutSpeech::Update()
extern "C" IL2CPP_METHOD_ATTR void anchorWithoutSpeech_Update_m931C184F18C21D7A08F5EA25A7974541A0DF07C2 (anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (anchorWithoutSpeech_Update_m931C184F18C21D7A08F5EA25A7974541A0DF07C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha8)) {
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)56), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// worldAnchorMg.AttachAnchor(gameObjectToAnchor, null); //not called in Editor
		WorldAnchorManager_tEE6EBA7F7FCAB42A081952AD7CAE6F36777AE4DE * L_1 = __this->get_worldAnchorMg_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_gameObjectToAnchor_5();
		NullCheck(L_1);
		WorldAnchorManager_AttachAnchor_m680235CB55D49814A6B7342DB2E351EAB4EDDAE7(L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		// Debug.Log("anchored without speech!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral348EF8474D7CA332C3DC2216E807BC5797E63F1E, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void anchorWithoutSpeech::.ctor()
extern "C" IL2CPP_METHOD_ATTR void anchorWithoutSpeech__ctor_m95CFB568095F21B8B08437D3AE29D4D395D034D6 (anchorWithoutSpeech_t25BA85CD8FF6069BE2460358D28714EB052B3843 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void callLBS::Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler.OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void callLBS_Microsoft_MixedReality_Toolkit_Input_IMixedRealityFocusHandler_OnFocusEnter_mC525AF6584946E3508A7614FD300DBD43D98A5A9 (callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55 * __this, FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (callLBS_Microsoft_MixedReality_Toolkit_Input_IMixedRealityFocusHandler_OnFocusEnter_mC525AF6584946E3508A7614FD300DBD43D98A5A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("fixed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral7BC555991DBAB41AA198FBD77899D49A277D4D6D, /*hidden argument*/NULL);
		// lbs= gameObject.AddComponent<locateBySize>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * L_1 = GameObject_AddComponent_TislocateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B_m6B93CD20E60B1DC6DB6CEA4A54C5AEA1DEF6F508(L_0, /*hidden argument*/GameObject_AddComponent_TislocateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B_m6B93CD20E60B1DC6DB6CEA4A54C5AEA1DEF6F508_RuntimeMethod_var);
		__this->set_lbs_4(L_1);
		// lbs.createStart();
		locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * L_2 = __this->get_lbs_4();
		NullCheck(L_2);
		locateBySize_createStart_m2F3FD1ED8FDD052FD68E7A6EF4F418F668F54452(L_2, /*hidden argument*/NULL);
		// lbs.Update();
		locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * L_3 = __this->get_lbs_4();
		NullCheck(L_3);
		locateBySize_Update_mE658382F13AAF9DC3EF3F1DEFFA150A18DB671FC(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void callLBS::Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler.OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData)
extern "C" IL2CPP_METHOD_ATTR void callLBS_Microsoft_MixedReality_Toolkit_Input_IMixedRealityFocusHandler_OnFocusExit_mB28A8CBF6BB4C8E8DB54AAD7D8F0ED82F0691DED (callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55 * __this, FocusEventData_tAA6027DD2D26B76E035E11439D9663DB64860C2F * ___eventData0, const RuntimeMethod* method)
{
	{
		// {}
		return;
	}
}
// System.Void callLBS::.ctor()
extern "C" IL2CPP_METHOD_ATTR void callLBS__ctor_mA7611AA6FB2592AEE4510F92BC7CFAE8F9D03C9D (callLBS_tFB901C9E6F3BA2E4D33A559228AD375E7A5DCE55 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void createCanvasObjs::Start()
extern "C" IL2CPP_METHOD_ATTR void createCanvasObjs_Start_mFDC1994C663543F1A0F8B5116D7D704DD4941543 (createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (createCanvasObjs_Start_mFDC1994C663543F1A0F8B5116D7D704DD4941543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myfont = Resources.Load<Font>("Assets/MixedRealityToolkit/StandardAssets/Fonts/selawk.ttf");
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_0 = Resources_Load_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_m9D478BB73C8B7721C029E0C5F171A0E559356FC0(_stringLiteral3F19693B18900F54E4CD92B9D9CFEFDDF7577AAB, /*hidden argument*/Resources_Load_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_m9D478BB73C8B7721C029E0C5F171A0E559356FC0_RuntimeMethod_var);
		__this->set_myfont_4(L_0);
		// }
		return;
	}
}
// System.Void createCanvasObjs::createCanvas()
extern "C" IL2CPP_METHOD_ATTR void createCanvasObjs_createCanvas_mD1230A4121A8339F04519F4CF613269BD3A06A1A (createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (createCanvasObjs_createCanvas_mD1230A4121A8339F04519F4CF613269BD3A06A1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// myGo = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// myGo.name = "TestCanvas";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_1, _stringLiteral11CBDF7923F4A524EF4C743CEBB596B3D01C3F84, /*hidden argument*/NULL);
		// myGo.AddComponent<Canvas>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		GameObject_AddComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD68D831E57A2A547C0F45127896158954FDE8685(L_2, /*hidden argument*/GameObject_AddComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD68D831E57A2A547C0F45127896158954FDE8685_RuntimeMethod_var);
		// myCanvas = myGo.GetComponent<Canvas>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m2FD9CC1491B61A8BD35D12587774F460F98D4AB6(L_3, /*hidden argument*/GameObject_GetComponent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m2FD9CC1491B61A8BD35D12587774F460F98D4AB6_RuntimeMethod_var);
		// myCanvas.renderMode = RenderMode.ScreenSpaceOverlay;
		NullCheck(L_4);
		Canvas_set_renderMode_m0AF240B53EB3B619DABA121213A162230EB84203(L_4, 0, /*hidden argument*/NULL);
		// myGo.AddComponent<CanvasScaler>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		NullCheck(L_5);
		GameObject_AddComponent_TisCanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564_m37701F5F2F4E14F68C7BED5E3642D1A8E4D80967(L_5, /*hidden argument*/GameObject_AddComponent_TisCanvasScaler_t304BA6F47EDB7402EBA405DD36CA7D6ADF723564_m37701F5F2F4E14F68C7BED5E3642D1A8E4D80967_RuntimeMethod_var);
		// myGo.AddComponent<GraphicRaycaster>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		GameObject_AddComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_mB3D221D6581013B31743459A5487828980579434(L_6, /*hidden argument*/GameObject_AddComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_mB3D221D6581013B31743459A5487828980579434_RuntimeMethod_var);
		// myText = new GameObject();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_7, /*hidden argument*/NULL);
		// myText.transform.parent = myGo.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_0;
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_9, L_11, /*hidden argument*/NULL);
		// myText.name = "wibble";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = L_8;
		NullCheck(L_12);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_12, _stringLiteral02E0182AE38F90D11BE647E337665E67F9243817, /*hidden argument*/NULL);
		// text = myText.AddComponent<Text>();
		NullCheck(L_12);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_13 = GameObject_AddComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m498C8BF6CD94A03A981AE236A616912C7B68BDA9(L_12, /*hidden argument*/GameObject_AddComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m498C8BF6CD94A03A981AE236A616912C7B68BDA9_RuntimeMethod_var);
		// text.font = myfont;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_14 = L_13;
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_15 = __this->get_myfont_4();
		NullCheck(L_14);
		Text_set_font_mD3CE7BCE58B5B0C3CBE51CE1AC74CBA662DFCF5C(L_14, L_15, /*hidden argument*/NULL);
		// text.text = "wobble";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_16 = L_14;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral25879169B1CD447A0ADA4988E828A1606D81EA2D);
		// text.fontSize = 100;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_17 = L_16;
		NullCheck(L_17);
		Text_set_fontSize_m02F0192F052A3815C17428F4C2BE51A03B3E15B7(L_17, ((int32_t)100), /*hidden argument*/NULL);
		// rectTransform = text.GetComponent<RectTransform>();
		NullCheck(L_17);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_18 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575(L_17, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_m751D9E690C55EAC53AB8C54812EFEAA238E52575_RuntimeMethod_var);
		// rectTransform.localPosition = new Vector3(-1, 0, -7);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_19 = L_18;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_20), (-1.0f), (0.0f), (-7.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_19, L_20, /*hidden argument*/NULL);
		// rectTransform.sizeDelta = new Vector2(400, 200);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_21), (400.0f), (200.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_19, L_21, /*hidden argument*/NULL);
		// Debug.Log("Canvas called");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral1C13208749839D182FE338E19F6700B73034E894, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void createCanvasObjs::Update()
extern "C" IL2CPP_METHOD_ATTR void createCanvasObjs_Update_mD0E3D36BD0DA82850B32E087E9A0DAF877ABE229 (createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)99), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// createCanvas();
		createCanvasObjs_createCanvas_mD1230A4121A8339F04519F4CF613269BD3A06A1A(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void createCanvasObjs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void createCanvasObjs__ctor_mA5F50D15CBD8075BBA1AF498964C4637FE05E1A8 (createCanvasObjs_t390E424E42AF14ECF05B884E1B089E91732034D8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void createObj::Start()
extern "C" IL2CPP_METHOD_ATTR void createObj_Start_m94A62767B1EFF0A74C06AEFBCF24AB204BD75114 (createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (createObj_Start_m94A62767B1EFF0A74C06AEFBCF24AB204BD75114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parentObject = GameObject.Find("LandmarkCollection");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral1E08C7274C45BCAF6980597DFBEDBE76FC7F43C8, /*hidden argument*/NULL);
		__this->set_parentObject_8(L_0);
		// }
		return;
	}
}
// System.Void createObj::createLandmark()
extern "C" IL2CPP_METHOD_ATTR void createObj_createLandmark_m581CB24877440FEEDA1F4C98FE0C0B629B465566 (createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (createObj_createLandmark_m581CB24877440FEEDA1F4C98FE0C0B629B465566_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NewLandmark = Instantiate(LandmarkToSpawn);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_LandmarkToSpawn_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		__this->set_NewLandmark_7(L_1);
		// NewLandmark.name = "NewLandmarkName";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_NewLandmark_7();
		NullCheck(L_2);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_2, _stringLiteral39B30745FAD48A6703C140679FAE451D7246F3E8, /*hidden argument*/NULL);
		// NewLandmark.transform.position = InitialPosition;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_NewLandmark_7();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_InitialPosition_6();
		NullCheck(L_4);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_5, /*hidden argument*/NULL);
		// NewLandmark.GetComponent<MeshRenderer>().material.color = Color.cyan;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_NewLandmark_7();
		NullCheck(L_6);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_m91C1D9637A332988C72E62D52DFCFE89A6DDAB72_RuntimeMethod_var);
		NullCheck(L_7);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_7, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		NullCheck(L_8);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_8, L_9, /*hidden argument*/NULL);
		// NewLandmark.transform.parent = parentObject.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_NewLandmark_7();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_10, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_parentObject_8();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_11, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void createObj::createArrow()
extern "C" IL2CPP_METHOD_ATTR void createObj_createArrow_m0DFF497C26FCBF733BB9A08E6FB8A72EB5150EFB (createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE * __this, const RuntimeMethod* method)
{
	{
		// public void createArrow() { }
		return;
	}
}
// System.Void createObj::.ctor()
extern "C" IL2CPP_METHOD_ATTR void createObj__ctor_m9D24A7EC570BA9CE4794E5B3989B7E16C001217D (createObj_t3896CA6E5333F95644DBE422D43B6AA4B56E7AEE * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 InitialPosition = new Vector3(0.15f,0.1f,0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.15f), (0.1f), (0.1f), /*hidden argument*/NULL);
		__this->set_InitialPosition_6(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void locateBySize::Start()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_Start_m132E82C6E0B0D26C04EAF4A2C445E9EA0760E5D4 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void locateBySize::createStart()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_createStart_m2F3FD1ED8FDD052FD68E7A6EF4F418F668F54452 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_createStart_m2F3FD1ED8FDD052FD68E7A6EF4F418F668F54452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pos = PosCreate();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = locateBySize_PosCreate_m6741E14EF1A9A29FF674D40E51F57289A2B69438(__this, 7, /*hidden argument*/NULL);
		__this->set_pos_6(L_0);
		// obj = ObjCreate();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = locateBySize_ObjCreate_mDB3B4D833622EA82CE3C717AF33AAF220C48DC86(__this, 7, /*hidden argument*/NULL);
		__this->set_obj_5(L_1);
		// LocateObj(obj, pos);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_2 = __this->get_obj_5();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = __this->get_pos_6();
		locateBySize_LocateObj_m70AEEFADA5390AD8816C9EBE3D96F0D98AA81EF2(__this, L_2, L_3, /*hidden argument*/NULL);
		// Debug.Log("lbs called");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3DD65769DEE12088D94CC94A4AF65E4D39E04CF1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void locateBySize::TestDebug()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_TestDebug_mAB22F43C923DA3763982E420DE9D8A5A88130196 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_TestDebug_mAB22F43C923DA3763982E420DE9D8A5A88130196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void TestDebug() { Debug.Log("I'm here!"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5CC6F0E13D2FA0B68E6D4AFD4BE18FE3398207F0, /*hidden argument*/NULL);
		// public void TestDebug() { Debug.Log("I'm here!"); }
		return;
	}
}
// System.Void locateBySize::Update()
extern "C" IL2CPP_METHOD_ATTR void locateBySize_Update_mE658382F13AAF9DC3EF3F1DEFFA150A18DB671FC (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_Update_mE658382F13AAF9DC3EF3F1DEFFA150A18DB671FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Keypad8))
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)264), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// Debug.Log("UpdateSizeSort called");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral31050DC39ADDF45DADD84CFC8FD9479BF563E226, /*hidden argument*/NULL);
		// SizeSort(obj);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = __this->get_obj_5();
		locateBySize_SizeSort_mF29C1524B54AEE2FCDF82983FBFC5F0D2BDC0099(__this, L_1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> locateBySize::PosCreate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * locateBySize_PosCreate_m6741E14EF1A9A29FF674D40E51F57289A2B69438 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_PosCreate_m6741E14EF1A9A29FF674D40E51F57289A2B69438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<Vector3> location0 = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_0, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		V_0 = L_0;
		// int i = 0;
		V_1 = 0;
		goto IL_002b;
	}

IL_000a:
	{
		// location0.Add(new Vector3(0.1f*i, 0.01f, 6));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = V_0;
		int32_t L_2 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), ((float)il2cpp_codegen_multiply((float)(0.1f), (float)(((float)((float)L_2))))), (0.01f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76(L_1, L_3, /*hidden argument*/List_1_Add_mF254441BAE00BD522FC9EB34808181B3A3949C76_RuntimeMethod_var);
		// i++;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		// while (i < num)
		int32_t L_5 = V_1;
		int32_t L_6 = ___num0;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000a;
		}
	}
	{
		// return location0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> locateBySize::ObjCreate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * locateBySize_ObjCreate_mDB3B4D833622EA82CE3C717AF33AAF220C48DC86 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_ObjCreate_mDB3B4D833622EA82CE3C717AF33AAF220C48DC86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * V_0 = NULL;
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * V_1 = NULL;
	int32_t V_2 = 0;
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * V_3 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	{
		// List<float> Radius = new List<float>();
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_0 = (List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 *)il2cpp_codegen_object_new(List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37_il2cpp_TypeInfo_var);
		List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7(L_0, /*hidden argument*/List_1__ctor_m61C801149485F4F45F4C47684970DB468B8B98A7_RuntimeMethod_var);
		V_0 = L_0;
		// List<GameObject> Spheres0 = new List<GameObject>();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_1 = (List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 *)il2cpp_codegen_object_new(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0_il2cpp_TypeInfo_var);
		List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6(L_1, /*hidden argument*/List_1__ctor_m70B8A20433AEEDEB942CD3EEC229497AB693E9D6_RuntimeMethod_var);
		V_1 = L_1;
		// int i = 0;
		V_2 = 0;
		// System.Random rnd = new System.Random();
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_2 = (Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F *)il2cpp_codegen_object_new(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F_il2cpp_TypeInfo_var);
		Random__ctor_mCD4B6E9DFD27A19F52FA441CD8CAEB687A9DD2F2(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		goto IL_0067;
	}

IL_0016:
	{
		// Radius.Add((float)(rnd.NextDouble()*0.1));
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_3 = V_0;
		Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * L_4 = V_3;
		NullCheck(L_4);
		double L_5 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_4);
		NullCheck(L_3);
		List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E(L_3, (((float)((float)(float)((double)il2cpp_codegen_multiply((double)L_5, (double)(0.1)))))), /*hidden argument*/List_1_Add_mB14710B1B2B4CDD445D577C9B2BB4CCB03213E4E_RuntimeMethod_var);
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(0, /*hidden argument*/NULL);
		V_4 = L_6;
		// sphere.transform.localScale = new Vector3(Radius[i], Radius[i], Radius[i]);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_4;
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		float L_11 = List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2(L_9, L_10, /*hidden argument*/List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_RuntimeMethod_var);
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		float L_14 = List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2(L_12, L_13, /*hidden argument*/List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_RuntimeMethod_var);
		List_1_t8980FA0E6CB3848F706C43D859930435C34BCC37 * L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		float L_17 = List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2(L_15, L_16, /*hidden argument*/List_1_get_Item_m837CF97CE81F51A842CCCC37F8AB7640A3DC6CB2_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_11, L_14, L_17, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_8, L_18, /*hidden argument*/NULL);
		// Spheres0.Add(sphere);
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_19 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = V_4;
		NullCheck(L_19);
		List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112(L_19, L_20, /*hidden argument*/List_1_Add_m94A913D452C8522AD16D2EB42D46016D83D86112_RuntimeMethod_var);
		// i++;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0067:
	{
		// while (i < num)
		int32_t L_22 = V_2;
		int32_t L_23 = ___num0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0016;
		}
	}
	{
		// return Spheres0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_24 = V_1;
		return L_24;
	}
}
// System.Void locateBySize::LocateObj(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" IL2CPP_METHOD_ATTR void locateBySize_LocateObj_m70AEEFADA5390AD8816C9EBE3D96F0D98AA81EF2 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_LocateObj_m70AEEFADA5390AD8816C9EBE3D96F0D98AA81EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int i = 0;
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// obj[i].transform.position = pos[i];
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = ___obj0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_0, L_1, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = ___pos1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_4, L_5, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_6, /*hidden argument*/NULL);
		// i++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// while (i < obj.Count)
		int32_t L_8 = V_0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_9 = ___obj0;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_9, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void locateBySize::SizeSort(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" IL2CPP_METHOD_ATTR void locateBySize_SizeSort_mF29C1524B54AEE2FCDF82983FBFC5F0D2BDC0099 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_SizeSort_mF29C1524B54AEE2FCDF82983FBFC5F0D2BDC0099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < obj.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// for (int j = 0; j < obj.Count - 1; j++)
		V_1 = 0;
		goto IL_0022;
	}

IL_0008:
	{
		// StartCoroutine(ReLocBySize(obj,pos,i,j));
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_0 = ___obj0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_1 = __this->get_pos_6();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		RuntimeObject* L_4 = locateBySize_ReLocBySize_m2E14E85CFCCF314EFA26ED974BEA80668A770520(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_4, /*hidden argument*/NULL);
		// for (int j = 0; j < obj.Count - 1; j++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0022:
	{
		// for (int j = 0; j < obj.Count - 1; j++)
		int32_t L_6 = V_1;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_7 = ___obj0;
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_7, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i < obj.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < obj.Count; i++)
		int32_t L_10 = V_0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_11 = ___obj0;
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35(L_11, /*hidden argument*/List_1_get_Count_m448499BD6BA2B98A6E4F92B96088CEA9EE3F4D35_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// }//StartCoroutine(Waiter())
		return;
	}
}
// System.Collections.IEnumerator locateBySize::ReLocBySize(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* locateBySize_ReLocBySize_m2E14E85CFCCF314EFA26ED974BEA80668A770520 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___obj0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___pos1, int32_t ___i2, int32_t ___j3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (locateBySize_ReLocBySize_m2E14E85CFCCF314EFA26ED974BEA80668A770520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * L_0 = (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D *)il2cpp_codegen_object_new(U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D_il2cpp_TypeInfo_var);
		U3CReLocBySizeU3Ed__11__ctor_m7BA82CDB5866D752630A9EFA56852ED069261D68(L_0, 0, /*hidden argument*/NULL);
		U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * L_1 = L_0;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_2 = ___obj0;
		NullCheck(L_1);
		L_1->set_obj_4(L_2);
		U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * L_3 = L_1;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = ___pos1;
		NullCheck(L_3);
		L_3->set_pos_5(L_4);
		U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * L_5 = L_3;
		int32_t L_6 = ___i2;
		NullCheck(L_5);
		L_5->set_i_2(L_6);
		U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * L_7 = L_5;
		int32_t L_8 = ___j3;
		NullCheck(L_7);
		L_7->set_j_3(L_8);
		return L_7;
	}
}
// System.Void locateBySize::.ctor()
extern "C" IL2CPP_METHOD_ATTR void locateBySize__ctor_m1658F84692689AC14FFF22FF9EA5CACB94376765 (locateBySize_t3CA3E86512892D3D0C68B005F545040239F1FF4B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void locateBySize_<ReLocBySize>d__11::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CReLocBySizeU3Ed__11__ctor_m7BA82CDB5866D752630A9EFA56852ED069261D68 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void locateBySize_<ReLocBySize>d__11::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CReLocBySizeU3Ed__11_System_IDisposable_Dispose_m9709251D317CB4AAB3690A2C9259E30D05C45E23 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean locateBySize_<ReLocBySize>d__11::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CReLocBySizeU3Ed__11_MoveNext_mA310CE28899EDEE747F237F96418B79D26194938 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReLocBySizeU3Ed__11_MoveNext_mA310CE28899EDEE747F237F96418B79D26194938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds((i * 5 + j*2) / 2);
		int32_t L_3 = __this->get_i_2();
		int32_t L_4 = __this->get_j_3();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, (((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)5)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)2))))/(int32_t)2))))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (obj[j].GetComponent<Renderer>().bounds.size.x > obj[j + 1].GetComponent<Renderer>().bounds.size.x)
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_6 = __this->get_obj_4();
		int32_t L_7 = __this->get_j_3();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_6, L_7, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_8);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_9 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_8, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		NullCheck(L_9);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_10 = Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_13 = __this->get_obj_4();
		int32_t L_14 = __this->get_j_3();
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_15);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_16 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_15, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		NullCheck(L_16);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_17 = Renderer_get_bounds_mB29E41E26DD95939C09F3EC67F5B2793A438BDB5(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		if ((!(((float)L_12) > ((float)L_19))))
		{
			goto IL_0143;
		}
	}
	{
		// obj[j].transform.position = pos[j + 1];
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_20 = __this->get_obj_4();
		int32_t L_21 = __this->get_j_3();
		NullCheck(L_20);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_20, L_21, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_24 = __this->get_pos_5();
		int32_t L_25 = __this->get_j_3();
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_24, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_23, L_26, /*hidden argument*/NULL);
		// obj[j + 1].transform.position = pos[j];
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_27 = __this->get_obj_4();
		int32_t L_28 = __this->get_j_3();
		NullCheck(L_27);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_27, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_31 = __this->get_pos_5();
		int32_t L_32 = __this->get_j_3();
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D(L_31, L_32, /*hidden argument*/List_1_get_Item_m8BA0B92A220CF9DE7230C71B12A020BD983EF43D_RuntimeMethod_var);
		NullCheck(L_30);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_30, L_33, /*hidden argument*/NULL);
		// GameObject temp = obj[j];
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_34 = __this->get_obj_4();
		int32_t L_35 = __this->get_j_3();
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_34, L_35, /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		V_2 = L_36;
		// obj[j] = obj[j + 1];
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_37 = __this->get_obj_4();
		int32_t L_38 = __this->get_j_3();
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_39 = __this->get_obj_4();
		int32_t L_40 = __this->get_j_3();
		NullCheck(L_39);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8(L_39, ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)), /*hidden argument*/List_1_get_Item_m7E9242F4E09BA130375174050CE83F9A3C3296E8_RuntimeMethod_var);
		NullCheck(L_37);
		List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6(L_37, L_38, L_41, /*hidden argument*/List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6_RuntimeMethod_var);
		// obj[j + 1] = temp;
		List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * L_42 = __this->get_obj_4();
		int32_t L_43 = __this->get_j_3();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_2;
		NullCheck(L_42);
		List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6(L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), L_44, /*hidden argument*/List_1_set_Item_mE472DD73586695B5188B1028848DDA4498C772C6_RuntimeMethod_var);
	}

IL_0143:
	{
		// }
		return (bool)0;
	}
}
// System.Object locateBySize_<ReLocBySize>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReLocBySizeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA7511E26C7BBAFF6FC055DB9BC8D8CE2DA6849C6 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void locateBySize_<ReLocBySize>d__11::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_Reset_mD4FBB056D1EA097E862955CC8466D139A37FE713 (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_Reset_mD4FBB056D1EA097E862955CC8466D139A37FE713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_Reset_mD4FBB056D1EA097E862955CC8466D139A37FE713_RuntimeMethod_var);
	}
}
// System.Object locateBySize_<ReLocBySize>d__11::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CReLocBySizeU3Ed__11_System_Collections_IEnumerator_get_Current_mA763FDB859C39F2CEC5DD5032ED4922D82A577CA (U3CReLocBySizeU3Ed__11_tDDC37D5E6C8B5A5185ECD6B5B21A82D4F0B3DF0D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider logEyeMovementData::get_EyeGazeProvider()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF (logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * G_B4_1 = NULL;
	{
		// private IMixedRealityEyeGazeProvider EyeGazeProvider => eyeTrackingProvider ?? (eyeTrackingProvider = CoreServices.InputSystem?.EyeGazeProvider);
		RuntimeObject* L_0 = __this->get_eyeTrackingProvider_4();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_001c:
	{
		RuntimeObject* L_5 = G_B4_0;
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->set_eyeTrackingProvider_4(L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_0024:
	{
		return G_B5_0;
	}
}
// System.Void logEyeMovementData::Start()
extern "C" IL2CPP_METHOD_ATTR void logEyeMovementData_Start_m23F180F25F0D842ED43A0A6D31CF73C651EBD32D (logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (logEyeMovementData_Start_m23F180F25F0D842ED43A0A6D31CF73C651EBD32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// FileStream eyeData = File.Create("Z:\\writtenFiles\\eyeMovement2.txt");
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_0 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(_stringLiteral6CA48225F44DCC9D33AD47622BDA974DB590F407, /*hidden argument*/NULL);
		// eyeData.Close();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Close() */, L_0);
		// string[] colName = { "time Stamp", "eyeposition.x","eyepoxition.y","eyeposition.z"};
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral0EEA60820FA3419629A65B38637B59C82EB64D8C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0EEA60820FA3419629A65B38637B59C82EB64D8C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA8BE613FF60F50A88741AB3A80D731B2BA0C46AF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA8BE613FF60F50A88741AB3A80D731B2BA0C46AF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralBA41A4BC69C1272D69456DFE01E7847106728A42);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBA41A4BC69C1272D69456DFE01E7847106728A42);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralF10D052505ABD06BE3CD6A6A00653749C86517D9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF10D052505ABD06BE3CD6A6A00653749C86517D9);
		V_0 = L_5;
		// string colName2Log = string.Join(" ", colName);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = V_0;
		String_t* L_7 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// Debug.Log(colName);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)(RuntimeObject *)L_8, /*hidden argument*/NULL);
		// System.IO.File.WriteAllText(@"Z:\\writtenFiles\\eyeMovement2.txt", colName2Log);
		String_t* L_9 = V_1;
		File_WriteAllText_m7BA355E5631C6A3E3D3378D6101EF65E72A45F0A(_stringLiteral618F1755B074F00F5012676C08FDC13D9365F23B, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void logEyeMovementData::Update()
extern "C" IL2CPP_METHOD_ATTR void logEyeMovementData_Update_mB6CD6FCFA1A37DB59E56DBE62F601FAA0C161F5C (logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (logEyeMovementData_Update_mB6CD6FCFA1A37DB59E56DBE62F601FAA0C161F5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B9_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B9_3 = NULL;
	{
		// string[] data = new string[]
		// {
		//     EyeGazeProvider.Timestamp.ToString(),
		//     EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.x.ToString():"0",
		//     EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.y.ToString():"0",
		//     EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.z.ToString():"0",
		// };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		RuntimeObject* L_2 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = InterfaceFuncInvoker0< DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(4 /* System.DateTime Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_Timestamp() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
		String_t* L_4 = DateTime_ToString_mBB245CB189C10659D35E8E273FB03E34EA1A7122((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_1;
		RuntimeObject* L_6 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_6);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			goto IL_0032;
		}
	}
	{
		G_B3_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004a;
	}

IL_0032:
	{
		RuntimeObject* L_8 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
		float* L_10 = (&V_3)->get_address_of_x_2();
		String_t* L_11 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = G_B3_3;
		RuntimeObject* L_13 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_13);
		G_B4_0 = 2;
		G_B4_1 = L_12;
		G_B4_2 = L_12;
		if (L_14)
		{
			G_B5_0 = 2;
			G_B5_1 = L_12;
			G_B5_2 = L_12;
			goto IL_0061;
		}
	}
	{
		G_B6_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0079;
	}

IL_0061:
	{
		RuntimeObject* L_15 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_15);
		V_3 = L_16;
		float* L_17 = (&V_3)->get_address_of_y_3();
		String_t* L_18 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_17, /*hidden argument*/NULL);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0079:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = G_B6_3;
		RuntimeObject* L_20 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_20);
		G_B7_0 = 3;
		G_B7_1 = L_19;
		G_B7_2 = L_19;
		if (L_21)
		{
			G_B8_0 = 3;
			G_B8_1 = L_19;
			G_B8_2 = L_19;
			goto IL_0090;
		}
	}
	{
		G_B9_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_00a8;
	}

IL_0090:
	{
		RuntimeObject* L_22 = logEyeMovementData_get_EyeGazeProvider_mE568989CEE231CAC7C550716014D14AF7EE3ABCF(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_22);
		V_3 = L_23;
		float* L_24 = (&V_3)->get_address_of_z_4();
		String_t* L_25 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_24, /*hidden argument*/NULL);
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_00a8:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		V_0 = G_B9_3;
		// string data2Log = string.Join(" ", data);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = V_0;
		String_t* L_27 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		// System.IO.File.AppendAllText(@"Z:\\writtenFiles\\eyeMovement2.txt", data2Log + Environment.NewLine);
		String_t* L_28 = V_1;
		String_t* L_29 = Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318(/*hidden argument*/NULL);
		String_t* L_30 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_28, L_29, /*hidden argument*/NULL);
		File_AppendAllText_m75D2FA3AD52D413CFC2DC07DC81A2BDF70ADE577(_stringLiteral618F1755B074F00F5012676C08FDC13D9365F23B, L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void logEyeMovementData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void logEyeMovementData__ctor_mE8868B8F96248ED0709DC37167E6128870E819B0 (logEyeMovementData_t8B7B48DD1198A1362577BFFC4E000BF10A53C151 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void reLocateObj::Start()
extern "C" IL2CPP_METHOD_ATTR void reLocateObj_Start_m27730A7DD5D35766C90F4CBD3A8FD7C9491F6CDC (reLocateObj_t45183B27C22BE51A826139EBE3750C49696C77A6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void reLocateObj::Update()
extern "C" IL2CPP_METHOD_ATTR void reLocateObj_Update_mAB3E1C950A8F3EE046FEEBA70E179ACD705E75DB (reLocateObj_t45183B27C22BE51A826139EBE3750C49696C77A6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void reLocateObj::.ctor()
extern "C" IL2CPP_METHOD_ATTR void reLocateObj__ctor_m74EF4D4B2834FA7C89A3FFE024C2821CFFB3ED58 (reLocateObj_t45183B27C22BE51A826139EBE3750C49696C77A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void showEyeGazeinfo::Start()
extern "C" IL2CPP_METHOD_ATTR void showEyeGazeinfo_Start_m37ACD05E0E65F112AD0134855F3909E3F76A6A17 (showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (showEyeGazeinfo_Start_m37ACD05E0E65F112AD0134855F3909E3F76A6A17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EyeGazeProvider = CoreServices.InputSystem.EyeGazeProvider;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_EyeGazeProvider() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, L_0);
		__this->set_EyeGazeProvider_6(L_1);
		// }
		return;
	}
}
// System.Void showEyeGazeinfo::Update()
extern "C" IL2CPP_METHOD_ATTR void showEyeGazeinfo_Update_mB53189E15CFDA96165484B13FC7A107F37466C2A (showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (showEyeGazeinfo_Update_mB53189E15CFDA96165484B13FC7A107F37466C2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B5_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B4_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B6_3 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B6_4 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B8_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B7_2 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B9_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B9_3 = NULL;
	showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * G_B9_4 = NULL;
	{
		// eyeGazeData = new string[] {
		// EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.x.ToString():"0",
		// EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.y.ToString():"0",
		// EyeGazeProvider.IsEyeGazeValid ? EyeGazeProvider.HitPosition.z.ToString():"0",
		// };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		RuntimeObject* L_2 = __this->get_EyeGazeProvider_6();
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_2);
		G_B1_0 = 0;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		G_B1_3 = __this;
		if (L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			G_B2_3 = __this;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0035;
	}

IL_001d:
	{
		RuntimeObject* L_4 = __this->get_EyeGazeProvider_6();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		float* L_6 = (&V_0)->get_address_of_x_2();
		String_t* L_7 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0035:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = G_B3_3;
		RuntimeObject* L_9 = __this->get_EyeGazeProvider_6();
		NullCheck(L_9);
		bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_9);
		G_B4_0 = 1;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		G_B4_3 = G_B3_4;
		if (L_10)
		{
			G_B5_0 = 1;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			G_B5_3 = G_B3_4;
			goto IL_004c;
		}
	}
	{
		G_B6_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0064;
	}

IL_004c:
	{
		RuntimeObject* L_11 = __this->get_EyeGazeProvider_6();
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_11);
		V_0 = L_12;
		float* L_13 = (&V_0)->get_address_of_y_3();
		String_t* L_14 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0064:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = G_B6_3;
		RuntimeObject* L_16 = __this->get_EyeGazeProvider_6();
		NullCheck(L_16);
		bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider::get_IsEyeGazeValid() */, IMixedRealityEyeGazeProvider_t8E0C8967B6CF071E65333E83B8819A64E3E20D5F_il2cpp_TypeInfo_var, L_16);
		G_B7_0 = 2;
		G_B7_1 = L_15;
		G_B7_2 = L_15;
		G_B7_3 = G_B6_4;
		if (L_17)
		{
			G_B8_0 = 2;
			G_B8_1 = L_15;
			G_B8_2 = L_15;
			G_B8_3 = G_B6_4;
			goto IL_007b;
		}
	}
	{
		G_B9_0 = _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_0093;
	}

IL_007b:
	{
		RuntimeObject* L_18 = __this->get_EyeGazeProvider_6();
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(8 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider::get_HitPosition() */, IMixedRealityGazeProvider_t93587EAC169723DC852D0943E9D85294681700FE_il2cpp_TypeInfo_var, L_18);
		V_0 = L_19;
		float* L_20 = (&V_0)->get_address_of_z_4();
		String_t* L_21 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_20, /*hidden argument*/NULL);
		G_B9_0 = L_21;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_0093:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		NullCheck(G_B9_4);
		G_B9_4->set_eyeGazeData_4(G_B9_3);
		// eyeGazeData2show = string.Join(",", eyeGazeData);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = __this->get_eyeGazeData_4();
		String_t* L_23 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, L_22, /*hidden argument*/NULL);
		__this->set_eyeGazeData2show_5(L_23);
		// gameObject.GetComponent<Text>().text = eyeGazeData2show;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_25 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_24, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		String_t* L_26 = __this->get_eyeGazeData2show_5();
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// }
		return;
	}
}
// System.Void showEyeGazeinfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void showEyeGazeinfo__ctor_m32DFF6A8655DE6AA21E6DA868B93995092174087 (showEyeGazeinfo_t34F1FC28122E5FA69FC4AB6D43E17B859796810E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void turnOnOrOff::Start()
extern "C" IL2CPP_METHOD_ATTR void turnOnOrOff_Start_m05AD6CB89A4F99525D83CE5D634F793B7F3DB28F (turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void turnOnOrOff::show()
extern "C" IL2CPP_METHOD_ATTR void turnOnOrOff_show_mAD5459A4BB8CE25535270ABBF532A1808C76BD8E (turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (turnOnOrOff_show_mAD5459A4BB8CE25535270ABBF532A1808C76BD8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ObjectToBeHide.activeSelf == false)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_ObjectToBeHide_4();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.Log("show again");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral4C9AFAD5592AE4F8337274546ED749D6A33DB862, /*hidden argument*/NULL);
		// ObjectToBeHide.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_ObjectToBeHide_4();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void turnOnOrOff::hide()
extern "C" IL2CPP_METHOD_ATTR void turnOnOrOff_hide_m3C7ED00A7A047FD821C43463D92457B5B4AF9D66 (turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9 * __this, const RuntimeMethod* method)
{
	{
		// if (ObjectToBeHide.activeSelf == true)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_ObjectToBeHide_4();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// ObjectToBeHide.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_ObjectToBeHide_4();
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void turnOnOrOff::.ctor()
extern "C" IL2CPP_METHOD_ATTR void turnOnOrOff__ctor_mCDBD2013183519099D1D2F03A431AD0FF75AFE03 (turnOnOrOff_t1B765E5431E9598C32C97D1B673D1DD8EEAC9FC9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void useSpatialMappingData::Start()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData_Start_m29348344B4DD26C49DCD7812FE925C4861631FC3 (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (useSpatialMappingData_Start_m29348344B4DD26C49DCD7812FE925C4861631FC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var spatialAwarenessService = CoreServices.SpatialAwarenessSystem;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_SpatialAwarenessSystem_m200A074E9F783A90A1CE486899A30CE2F46F1B9D(/*hidden argument*/NULL);
		// var dataProviderAccess = spatialAwarenessService as IMixedRealityDataProviderAccess;
		// var meshObserver = dataProviderAccess.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)));
		GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mEFDF5B03D4F62CF5EA266F45ED075CF83C3CAC66_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)), (String_t*)NULL);
		// }
		return;
	}
}
// System.Void useSpatialMappingData::startspatialmapping()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData_startspatialmapping_m63FF339B7C94C5C5F45BA7388A470667E68CF6FE (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (useSpatialMappingData_startspatialmapping_m63FF339B7C94C5C5F45BA7388A470667E68CF6FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var access = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_SpatialAwarenessSystem_m200A074E9F783A90A1CE486899A30CE2F46F1B9D(/*hidden argument*/NULL);
		// var observer = access.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mEFDF5B03D4F62CF5EA266F45ED075CF83C3CAC66_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)), (String_t*)NULL);
		// observer.Resume();
		RuntimeObject* L_2 = L_1;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_2);
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		RuntimeObject* L_3 = L_2;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var, L_3, 1);
		// foreach (SpatialAwarenessMeshObject meshObject in observer.Meshes.Values)
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::get_Meshes() */, IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Values() */, IReadOnlyDictionary_2_tB7D8D26E7324CDD1F7BC743BE7F8C1D9E3BF0D71_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::GetEnumerator() */, IEnumerable_1_tC7A125EA1F2C1B004299BC1580BB2EB77BB5ADD9_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002f:
		{
			// foreach (SpatialAwarenessMeshObject meshObject in observer.Meshes.Values)
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * L_8 = InterfaceFuncInvoker0< SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Current() */, IEnumerator_1_tBE2CE86712A2F058355AEF0A302C1D728D9D60F7_il2cpp_TypeInfo_var, L_7);
			V_1 = L_8;
			// meshContainer = meshObject.Filter.mesh;
			SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * L_9 = V_1;
			NullCheck(L_9);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_10 = BaseSpatialAwarenessObject_get_Filter_mDE7EB88ACCF233A49A70BCB2FBEF04675756C554(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_11 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_10, /*hidden argument*/NULL);
			__this->set_meshContainer_4(L_11);
		}

IL_0047:
		{
			// foreach (SpatialAwarenessMeshObject meshObject in observer.Meshes.Values)
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_002f;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void useSpatialMappingData::suspendspatialmapping()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData_suspendspatialmapping_mEBDCF4537889B4BA0567C468E94122DF3B8789EC (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (useSpatialMappingData_suspendspatialmapping_mEBDCF4537889B4BA0567C468E94122DF3B8789EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var access = CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_SpatialAwarenessSystem_m200A074E9F783A90A1CE486899A30CE2F46F1B9D(/*hidden argument*/NULL);
		// var observer = access.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(IMixedRealityDataProviderAccess_GetDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mEFDF5B03D4F62CF5EA266F45ED075CF83C3CAC66_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityDataProviderAccess_t8EDB3ADE5066213B543EB035F96F346DEF5FD94C_il2cpp_TypeInfo_var)), (String_t*)NULL);
		// observer.Suspend();
		RuntimeObject* L_2 = L_1;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_2);
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Occlusion;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var, L_2, 2);
		// }
		return;
	}
}
// System.Void useSpatialMappingData::hidespatialmesh()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData_hidespatialmesh_mCDCA8D14A8833B5C29193CF238A03594FBB6617D (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void useSpatialMappingData::showsptatialmesh()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData_showsptatialmesh_m93FE94F6E3B971046CAAF1E49FA1E3D390C9A849 (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void useSpatialMappingData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void useSpatialMappingData__ctor_m54118D5037F6C09B766C9DE49FE91190B2D91276 (useSpatialMappingData_t09391CA051AA14C8C114E0514F9C9496704357D7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void visibleArea::Start()
extern "C" IL2CPP_METHOD_ATTR void visibleArea_Start_mAFAD05FA4E40B2CCB016B43F95F076B0A6CA5FB3 (visibleArea_t4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void visibleArea::Update()
extern "C" IL2CPP_METHOD_ATTR void visibleArea_Update_m447C18B115069F8D3B4133085E03990BF101E88A (visibleArea_t4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void visibleArea::.ctor()
extern "C" IL2CPP_METHOD_ATTR void visibleArea__ctor_mA842C3D95B1B45F23BA3BEE0B27A594FB117DBAE (visibleArea_t4A91AAEE426CDA44BD5EE3D5EFD46E88C6474E57 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
