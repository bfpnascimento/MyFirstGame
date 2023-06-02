﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct IEnumerable_1_tCE4ECCD343378F3D3800523073B60FDAB73EA77F;
// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[]
struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15;
// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityLogWriter
struct UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D;
// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
struct WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA;
// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF;
// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240;
// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826;
// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54;
// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.Transform/Enumerator
struct Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259;

IL2CPP_EXTERN_C RuntimeClass* BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539;
IL2CPP_EXTERN_C String_t* _stringLiteral17EEFBC9408FC4C31361C306483409E765FBAF81;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C String_t* _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1F8DBD872D411FFE2231413691AA7FBCFE180B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____items_1)); }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* get__items_1() const { return ____items_1; }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_StaticFields, ____emptyArray_5)); }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA, ___data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
struct U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields
{
public:
	// UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<>9
	U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::msgReceived
	bool ___msgReceived_0;

public:
	inline static int32_t get_offset_of_msgReceived_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD, ___msgReceived_0)); }
	inline bool get_msgReceived_0() const { return ___msgReceived_0; }
	inline bool* get_address_of_msgReceived_0() { return &___msgReceived_0; }
	inline void set_msgReceived_0(bool value)
	{
		___msgReceived_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_messageTypeId_0), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F, ___messageCallback_2)); }
	inline MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageCallback_2), (void*)value);
	}
};


// UnityEngine.TextAsset/EncodingUtility
struct EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983  : public RuntimeObject
{
public:

public:
};

struct EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields
{
public:
	// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[] UnityEngine.TextAsset/EncodingUtility::encodingLookup
	KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* ___encodingLookup_0;
	// System.Text.Encoding UnityEngine.TextAsset/EncodingUtility::targetEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___targetEncoding_1;

public:
	inline static int32_t get_offset_of_encodingLookup_0() { return static_cast<int32_t>(offsetof(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields, ___encodingLookup_0)); }
	inline KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* get_encodingLookup_0() const { return ___encodingLookup_0; }
	inline KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7** get_address_of_encodingLookup_0() { return &___encodingLookup_0; }
	inline void set_encodingLookup_0(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* value)
	{
		___encodingLookup_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodingLookup_0), (void*)value);
	}

	inline static int32_t get_offset_of_targetEncoding_1() { return static_cast<int32_t>(offsetof(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields, ___targetEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_targetEncoding_1() const { return ___targetEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_targetEncoding_1() { return &___targetEncoding_1; }
	inline void set_targetEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___targetEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetEncoding_1), (void*)value);
	}
};


// UnityEngine.Transform/Enumerator
struct Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259, ___outer_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_outer_0() const { return ___outer_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outer_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>
struct KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B, ___key_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_key_0() const { return ___key_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B, ___value_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_value_1() const { return ___value_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.CullingGroupEvent
struct CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};


// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:
	// System.String System.Text.DecoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418  : public EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strDefault_4), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};


// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};


// UnityEngine.PlayerLoop.Update
struct Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE__padding[1];
	};

public:
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute
struct WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Unity.Collections.WriteOnlyAttribute
struct WriteOnlyAttribute_t6897770F57B21F93E440F44DF3D1A5804D6019FA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
struct ARCoreUpdate_t345A656C10E6E775CE53726D062F4CECDACD7D56 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ARCoreUpdate_t345A656C10E6E775CE53726D062F4CECDACD7D56__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
struct AnalyticsCoreStatsUpdate_t4A67F117F57258A558CE7C30ECD0DC6BD844E0BC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AnalyticsCoreStatsUpdate_t4A67F117F57258A558CE7C30ECD0DC6BD844E0BC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
struct ClearIntermediateRenderers_tAC7049D6072F90734E528B90B95C40CF7F90A748 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearIntermediateRenderers_tAC7049D6072F90734E528B90B95C40CF7F90A748__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
struct ClearLines_t07F570AD58667935AD12B63CD120E9BCB6E95D71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t07F570AD58667935AD12B63CD120E9BCB6E95D71__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
struct DeliverIosPlatformEvents_t3BF56C33BEF28195805C74F0ED4B3F53BEDF9049 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DeliverIosPlatformEvents_t3BF56C33BEF28195805C74F0ED4B3F53BEDF9049__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
struct DispatchEventQueueEvents_t57DA008DF9012DB2B7B7B093F66207E11F1801C7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DispatchEventQueueEvents_t57DA008DF9012DB2B7B7B093F66207E11F1801C7__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
struct ExecuteMainThreadJobs_t178184E2A46BE6E4999FB4A6909DA0981128FF19 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteMainThreadJobs_t178184E2A46BE6E4999FB4A6909DA0981128FF19__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
struct GpuTimestamp_t2AFDA2966ED888A5AD724AAB77422828D4ADBA7F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GpuTimestamp_t2AFDA2966ED888A5AD724AAB77422828D4ADBA7F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
struct PerformanceAnalyticsUpdate_t1AE3F68BF048267B56AC956F28F48B286F2DB5C6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PerformanceAnalyticsUpdate_t1AE3F68BF048267B56AC956F28F48B286F2DB5C6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
struct PhysicsResetInterpolatedTransformPosition_t63FDDA90182BA3FA40B3D74870BC99958C67E18C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsResetInterpolatedTransformPosition_t63FDDA90182BA3FA40B3D74870BC99958C67E18C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
struct PlayerCleanupCachedData_t59BB27B35F4901EFD5243D3ACB724C4AB760D97E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerCleanupCachedData_t59BB27B35F4901EFD5243D3ACB724C4AB760D97E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
struct PollHtcsPlayerConnection_t0701098C7389B5A4ABE7B2D875AF7797FC693C63 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollHtcsPlayerConnection_t0701098C7389B5A4ABE7B2D875AF7797FC693C63__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
struct PollPlayerConnection_tC440AA2EF4FFBE9A131CD21E28FD2C999C9699C9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PollPlayerConnection_tC440AA2EF4FFBE9A131CD21E28FD2C999C9699C9__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
struct PresentBeforeUpdate_tF1A8E51EF605A45F3AFA67A3EC4F55D48483E2D0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentBeforeUpdate_tF1A8E51EF605A45F3AFA67A3EC4F55D48483E2D0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
struct ProcessMouseInWindow_t5E3FFEFC4E6FC09E607DACE6E0CA8DF0CDADFAE6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessMouseInWindow_t5E3FFEFC4E6FC09E607DACE6E0CA8DF0CDADFAE6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
struct ProcessRemoteInput_t42D081A550685F4C78E334CA381D184F08FB62F3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessRemoteInput_t42D081A550685F4C78E334CA381D184F08FB62F3__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ProfilerStartFrame
struct ProfilerStartFrame_tAC3E2CF0778F729F11D08358849F7CD4CD585E7C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerStartFrame_tAC3E2CF0778F729F11D08358849F7CD4CD585E7C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
struct RendererNotifyInvisible_t8ED1E3B4D8DE9D108C6EA967C5DB4B59A5BD48E5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RendererNotifyInvisible_t8ED1E3B4D8DE9D108C6EA967C5DB4B59A5BD48E5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
struct ResetFrameStatsAfterPresent_t7E3F5B7774CBAD72CB6EAF576B64A4D7AF24D1D4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetFrameStatsAfterPresent_t7E3F5B7774CBAD72CB6EAF576B64A4D7AF24D1D4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
struct ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
struct SpriteAtlasManagerUpdate_t98936A7616CEE98F8447488F9CC817448529250F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SpriteAtlasManagerUpdate_t98936A7616CEE98F8447488F9CC817448529250F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
struct TangoUpdate_tD6640C8082DC2C21F7864C6D5D5606C435455A68 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TangoUpdate_tD6640C8082DC2C21F7864C6D5D5606C435455A68__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
struct UnityWebRequestUpdate_t893B39AA3BF55998BCBF9F6C33C3A24146456781 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UnityWebRequestUpdate_t893B39AA3BF55998BCBF9F6C33C3A24146456781__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
struct UpdateAsyncReadbackManager_t432611386C4251CC08B4CA68843AAE1B049D116F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAsyncReadbackManager_t432611386C4251CC08B4CA68843AAE1B049D116F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t6BD3BF9EC17DC88DCCACE9DA694623B8184D4C08 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t6BD3BF9EC17DC88DCCACE9DA694623B8184D4C08__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
struct UpdateInputManager_t4624AF2E3D5322A456E241653B288D4407A070D7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateInputManager_t4624AF2E3D5322A456E241653B288D4407A070D7__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
struct UpdateKinect_t5BDA1D122E2563A2BD5C16B5BFC9675704984331 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateKinect_t5BDA1D122E2563A2BD5C16B5BFC9675704984331__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
struct UpdateMainGameViewRect_tF94FDE58A08AA15EE7B31E9090AC23CD08BF9080 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMainGameViewRect_tF94FDE58A08AA15EE7B31E9090AC23CD08BF9080__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
struct UpdatePreloading_t29F051FCC78430BB557F67F99A1E24431DF85AB4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdatePreloading_t29F051FCC78430BB557F67F99A1E24431DF85AB4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
struct UpdateStreamingManager_tCAB478C327FDE15704577ED0A7CA8A22B2BB8554 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateStreamingManager_tCAB478C327FDE15704577ED0A7CA8A22B2BB8554__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
struct UpdateTextureStreamingManager_tD08A0C8DDF3E6C7970AA5A651B0163D449C21A3A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateTextureStreamingManager_tD08A0C8DDF3E6C7970AA5A651B0163D449C21A3A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
struct XRUpdate_t718B5C2C28DAC016453B3B52D02EEE90D546A495 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRUpdate_t718B5C2C28DAC016453B3B52D02EEE90D546A495__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/AudioFixedUpdate
struct AudioFixedUpdate_t7BB8352EC33E8541EAE347A6ECE127618C347C71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AudioFixedUpdate_t7BB8352EC33E8541EAE347A6ECE127618C347C71__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/ClearLines
struct ClearLines_t1D6D67DA1401D35D871A126DB5A5EF69CCD57721 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearLines_t1D6D67DA1401D35D871A126DB5A5EF69CCD57721__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedSampleTime
struct DirectorFixedSampleTime_t407AD40EC7E9155C6016F3C38DA8B626FF5495D2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedSampleTime_t407AD40EC7E9155C6016F3C38DA8B626FF5495D2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdate
struct DirectorFixedUpdate_tC33E95FDFBA813B63A0AD9A8446234869AE0EDDA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdate_tC33E95FDFBA813B63A0AD9A8446234869AE0EDDA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/DirectorFixedUpdatePostPhysics
struct DirectorFixedUpdatePostPhysics_t1ADEB661939FF1C092B77D6E72D0B84C2B357346 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorFixedUpdatePostPhysics_t1ADEB661939FF1C092B77D6E72D0B84C2B357346__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/LegacyFixedAnimationUpdate
struct LegacyFixedAnimationUpdate_tA84F66DFD94D3FC2604C0AD276D9D61D1039A351 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyFixedAnimationUpdate_tA84F66DFD94D3FC2604C0AD276D9D61D1039A351__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/NewInputFixedUpdate
struct NewInputFixedUpdate_t988F4AAC48EC31DD66EAC14BE6EC2DF37ACC10CC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputFixedUpdate_t988F4AAC48EC31DD66EAC14BE6EC2DF37ACC10CC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/Physics2DFixedUpdate
struct Physics2DFixedUpdate_t4A442ECBB32F36838F630AC8A06CDC557C8C0B68 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DFixedUpdate_t4A442ECBB32F36838F630AC8A06CDC557C8C0B68__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/PhysicsClothFixedUpdate
struct PhysicsClothFixedUpdate_t3CEB0DDEB572CBD9C45085F56EC6788F7EEEB275 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsClothFixedUpdate_t3CEB0DDEB572CBD9C45085F56EC6788F7EEEB275__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/PhysicsFixedUpdate
struct PhysicsFixedUpdate_t46121810B20B779B5BA50C78BC94DE2ABEB4D0C2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsFixedUpdate_t46121810B20B779B5BA50C78BC94DE2ABEB4D0C2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunBehaviourFixedUpdate
struct ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/ScriptRunDelayedFixedFrameRate
struct ScriptRunDelayedFixedFrameRate_t85D2FB79D04C22A2A6C8FD81A9B32D9930C23297 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedFixedFrameRate_t85D2FB79D04C22A2A6C8FD81A9B32D9930C23297__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.FixedUpdate/XRFixedUpdate
struct XRFixedUpdate_t6A63A12A03ABAACF0B95B921C5CC15484C467132 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRFixedUpdate_t6A63A12A03ABAACF0B95B921C5CC15484C467132__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/AsyncUploadTimeSlicedUpdate
struct AsyncUploadTimeSlicedUpdate_t47FF6A1EB31C45CA8BD817C6D50FCF55CAD91610 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUploadTimeSlicedUpdate_t47FF6A1EB31C45CA8BD817C6D50FCF55CAD91610__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/DirectorSampleTime
struct DirectorSampleTime_tF12AFDE1C2F301238588429E1D63F4B7D28FFA51 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorSampleTime_tF12AFDE1C2F301238588429E1D63F4B7D28FFA51__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/SynchronizeInputs
struct SynchronizeInputs_t4F1F899CB89A9DF9090DEBDF21425980C1A216C0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeInputs_t4F1F899CB89A9DF9090DEBDF21425980C1A216C0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/SynchronizeState
struct SynchronizeState_tC915C418D749E282696E2D2DC6080CE18C4ABDFA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SynchronizeState_tC915C418D749E282696E2D2DC6080CE18C4ABDFA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/UpdateCameraMotionVectors
struct UpdateCameraMotionVectors_t2D7D3155FCE58E4F0AE638F4C99CAD66E23FA8E7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCameraMotionVectors_t2D7D3155FCE58E4F0AE638F4C99CAD66E23FA8E7__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Initialization/XREarlyUpdate
struct XREarlyUpdate_t9F969CD15ECD221891055EB60CE7A879B6A1AE86 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XREarlyUpdate_t9F969CD15ECD221891055EB60CE7A879B6A1AE86__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
struct BatchModeUpdate_t8C6F527A5CA9A7A8E9CCCA61F2E99448C18AEAD2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t BatchModeUpdate_t8C6F527A5CA9A7A8E9CCCA61F2E99448C18AEAD2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
struct ClearImmediateRenderers_t37FCF798A50163FCAE31F618A88AA0928C40CAFB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ClearImmediateRenderers_t37FCF798A50163FCAE31F618A88AA0928C40CAFB__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
struct DirectorLateUpdate_t77313447CF25B5FBC7F6A738FC6B6FE4FB7D3B0E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorLateUpdate_t77313447CF25B5FBC7F6A738FC6B6FE4FB7D3B0E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
struct DirectorRenderImage_t18FF15945AD4A75A4E38086E7E50F0839A6085B9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorRenderImage_t18FF15945AD4A75A4E38086E7E50F0839A6085B9__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
struct EndGraphicsJobsAfterScriptLateUpdate_tE1D20D73472F346D7745C213712D90496E6E9350 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptLateUpdate_tE1D20D73472F346D7745C213712D90496E6E9350__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
struct EnlightenRuntimeUpdate_t0F7246E586E8744EBF22C6E557A5CDD79D42512F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EnlightenRuntimeUpdate_t0F7246E586E8744EBF22C6E557A5CDD79D42512F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
struct ExecuteGameCenterCallbacks_t6AAA6429F53079FA5779EC93FF422C45F39B6A69 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ExecuteGameCenterCallbacks_t6AAA6429F53079FA5779EC93FF422C45F39B6A69__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
struct FinishFrameRendering_t6D8F987520D0CABFB634214E47EA6C98A1DE69F5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t FinishFrameRendering_t6D8F987520D0CABFB634214E47EA6C98A1DE69F5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
struct GUIClearEvents_t2ACF18A4B2C80DFB240DBE01D7B0B0751C3042ED 
{
public:
	union
	{
		struct
		{
		};
		uint8_t GUIClearEvents_t2ACF18A4B2C80DFB240DBE01D7B0B0751C3042ED__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
struct InputEndFrame_t4E00F58665EC8A4AC407107E6AD65F8D9BE5D496 
{
public:
	union
	{
		struct
		{
		};
		uint8_t InputEndFrame_t4E00F58665EC8A4AC407107E6AD65F8D9BE5D496__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
struct MemoryFrameMaintenance_t8641D3964D8E591E9924C60B849CFC8E13781FCA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MemoryFrameMaintenance_t8641D3964D8E591E9924C60B849CFC8E13781FCA__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
struct ParticleSystemEndUpdateAll_t0C9862FC07BF69AEC1B23295BF70D3F4862D9DE8 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemEndUpdateAll_t0C9862FC07BF69AEC1B23295BF70D3F4862D9DE8__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
struct PhysicsSkinnedClothBeginUpdate_t23CEEF7DB8085BB3831A7670928EDD96A0BD36C1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothBeginUpdate_t23CEEF7DB8085BB3831A7670928EDD96A0BD36C1__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
struct PhysicsSkinnedClothFinishUpdate_tA2BC6F1632D750962DBB9A5331B880A3964D17C0 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsSkinnedClothFinishUpdate_tA2BC6F1632D750962DBB9A5331B880A3964D17C0__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
struct PlayerEmitCanvasGeometry_tD6837358BC1539ED3BFDA4A14DBA2634D21C7278 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerEmitCanvasGeometry_tD6837358BC1539ED3BFDA4A14DBA2634D21C7278__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
struct PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
struct PlayerSendFramePostPresent_t2F6B4A129327E35A001A0C0808FEFF20D1BAFCB6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFramePostPresent_t2F6B4A129327E35A001A0C0808FEFF20D1BAFCB6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
struct PlayerSendFrameStarted_tBE2DDEEFF66EAD5BFC54776035F83F2BBFDC866A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerSendFrameStarted_tBE2DDEEFF66EAD5BFC54776035F83F2BBFDC866A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
struct PlayerUpdateCanvases_tA3BDD28A248E9294BBA8E93C53AF78B902A24CD4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PlayerUpdateCanvases_tA3BDD28A248E9294BBA8E93C53AF78B902A24CD4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
struct PresentAfterDraw_t26958AF5B43FD8A6101C88833BC41A0F5CE9830A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PresentAfterDraw_t26958AF5B43FD8A6101C88833BC41A0F5CE9830A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
struct ProcessWebSendMessages_t5AD55E51AED08DA28C11DF31783B07C7A5128124 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProcessWebSendMessages_t5AD55E51AED08DA28C11DF31783B07C7A5128124__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
struct ProfilerEndFrame_t9D91D2F297E099F92D03834C9FBFF860A8EF45DD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerEndFrame_t9D91D2F297E099F92D03834C9FBFF860A8EF45DD__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
struct ProfilerSynchronizeStats_t8B0F4436679D8BAF7D86793D207AD90477D601BB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ProfilerSynchronizeStats_t8B0F4436679D8BAF7D86793D207AD90477D601BB__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
struct ResetInputAxis_t585B9BDCE262954A57C75B9492FCF7146662E21C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ResetInputAxis_t585B9BDCE262954A57C75B9492FCF7146662E21C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t6D962FA77CFBF776A2D946C07C567B795CF671B4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t6D962FA77CFBF776A2D946C07C567B795CF671B4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
struct ShaderHandleErrors_t2A99C9332EC9DE30DD16AF1FD18C582E5B02AE92 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ShaderHandleErrors_t2A99C9332EC9DE30DD16AF1FD18C582E5B02AE92__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
struct SortingGroupsUpdate_tBC21E7D8B383652646C08B9AE743A7EC38733CEF 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SortingGroupsUpdate_tBC21E7D8B383652646C08B9AE743A7EC38733CEF__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
struct ThreadedLoadingDebug_t12597D128CC91C40B4C874800B0C3AEBF7DAD04B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ThreadedLoadingDebug_t12597D128CC91C40B4C874800B0C3AEBF7DAD04B__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
struct TriggerEndOfFrameCallbacks_tB5DD4CDE53AB8C30E72194AB21AFE73BFB4DC424 
{
public:
	union
	{
		struct
		{
		};
		uint8_t TriggerEndOfFrameCallbacks_tB5DD4CDE53AB8C30E72194AB21AFE73BFB4DC424__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
struct UpdateAllRenderers_t96FC2DF53BC1D90C7E40E2CAD10B8C674A94B86C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllRenderers_t96FC2DF53BC1D90C7E40E2CAD10B8C674A94B86C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
struct UpdateAllSkinnedMeshes_tC6792E38655DE2113814AC6A642B3D937D6640F6 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAllSkinnedMeshes_tC6792E38655DE2113814AC6A642B3D937D6640F6__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
struct UpdateAudio_t87394777AB6FE384B45C0C013722C1F68A60CF58 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateAudio_t87394777AB6FE384B45C0C013722C1F68A60CF58__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
struct UpdateCanvasRectTransform_t4E5EA2B18FCFD686E1F2052517657E391709422A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCanvasRectTransform_t4E5EA2B18FCFD686E1F2052517657E391709422A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
struct UpdateCaptureScreenshot_t4FC86A971BE4E341EE83B9BCF72D3642CB67E483 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCaptureScreenshot_t4FC86A971BE4E341EE83B9BCF72D3642CB67E483__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
struct UpdateCustomRenderTextures_t52B541FA5A7354ED440E274C6E357EBAA3F4C031 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateCustomRenderTextures_t52B541FA5A7354ED440E274C6E357EBAA3F4C031__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
struct UpdateLightProbeProxyVolumes_t42C724BC635B9701939388DCB63A3FF0E882EA3E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateLightProbeProxyVolumes_t42C724BC635B9701939388DCB63A3FF0E882EA3E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
struct UpdateRectTransform_t6290D8B6BF5E990B5F706FE60B4A5CD954D72F13 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateRectTransform_t6290D8B6BF5E990B5F706FE60B4A5CD954D72F13__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
struct UpdateResolution_t8394E04EF0F5C04C0C65B1DF23F0E3E700144B45 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateResolution_t8394E04EF0F5C04C0C65B1DF23F0E3E700144B45__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
struct UpdateSubstance_tC6E01D9640025CD7D0B09D636C02172D22F66967 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateSubstance_tC6E01D9640025CD7D0B09D636C02172D22F66967__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
struct UpdateVideo_t1E34A645DFD2C4E5243980D958392F6969F3D064 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_t1E34A645DFD2C4E5243980D958392F6969F3D064__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
struct UpdateVideoTextures_t05417287668B8B95121C4236FD3A419DAC091BB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideoTextures_t05417287668B8B95121C4236FD3A419DAC091BB5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
struct VFXUpdate_tA520740E78D381B2830822C7FE90A203478B2214 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VFXUpdate_tA520740E78D381B2830822C7FE90A203478B2214__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
struct XRPostLateUpdate_t2DCEBE93C7B7994BC1888C2BF003C386E131DEB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostLateUpdate_t2DCEBE93C7B7994BC1888C2BF003C386E131DEB5__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
struct XRPostPresent_t1B355F20B2823F13F6FBC66E36526B280B7EA85C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPostPresent_t1B355F20B2823F13F6FBC66E36526B280B7EA85C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
struct XRPreEndFrame_t35AEF9FB00F67C92D7A01AFDBB56D2FC3CC3A251 
{
public:
	union
	{
		struct
		{
		};
		uint8_t XRPreEndFrame_t35AEF9FB00F67C92D7A01AFDBB56D2FC3CC3A251__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/AIUpdatePostScript
struct AIUpdatePostScript_t8A88713869A78E54E8A68D01A2DAE28612B31BE4 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdatePostScript_t8A88713869A78E54E8A68D01A2DAE28612B31BE4__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/ConstraintManagerUpdate
struct ConstraintManagerUpdate_t60B829793DBE56E48C551CA2FC80F7FE82EC0090 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ConstraintManagerUpdate_t60B829793DBE56E48C551CA2FC80F7FE82EC0090__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/DirectorDeferredEvaluate
struct DirectorDeferredEvaluate_t1ADCC8CADAB3489481182AE5AE94F2218BA8E08F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorDeferredEvaluate_t1ADCC8CADAB3489481182AE5AE94F2218BA8E08F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationBegin
struct DirectorUpdateAnimationBegin_t1F818F8031BEDE2CDC67F69C0CDFF860F2063A74 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationBegin_t1F818F8031BEDE2CDC67F69C0CDFF860F2063A74__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/DirectorUpdateAnimationEnd
struct DirectorUpdateAnimationEnd_tDFC00FCAC7FBFD798572D224654127451FF4CEC1 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdateAnimationEnd_tDFC00FCAC7FBFD798572D224654127451FF4CEC1__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/EndGraphicsJobsAfterScriptUpdate
struct EndGraphicsJobsAfterScriptUpdate_tD208592C17EBA50EB4E2E9B4E4C64C9122AE3C96 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndGraphicsJobsAfterScriptUpdate_tD208592C17EBA50EB4E2E9B4E4C64C9122AE3C96__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/LegacyAnimationUpdate
struct LegacyAnimationUpdate_t4838E9C42DDCC98CF195A798F73DD5E57F559A37 
{
public:
	union
	{
		struct
		{
		};
		uint8_t LegacyAnimationUpdate_t4838E9C42DDCC98CF195A798F73DD5E57F559A37__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/ParticleSystemBeginUpdateAll
struct ParticleSystemBeginUpdateAll_t87DCB20B8C93E68E52B943F1E3B31BB091FCA078 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ParticleSystemBeginUpdateAll_t87DCB20B8C93E68E52B943F1E3B31BB091FCA078__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/Physics2DLateUpdate
struct Physics2DLateUpdate_t9102D905FE91BCB2893E02C6824C5AAC56B47072 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DLateUpdate_t9102D905FE91BCB2893E02C6824C5AAC56B47072__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/ScriptRunBehaviourLateUpdate
struct ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/UIElementsUpdatePanels
struct UIElementsUpdatePanels_t88C1C5E585CBE9C5230CD7862714798690BF034F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UIElementsUpdatePanels_t88C1C5E585CBE9C5230CD7862714798690BF034F__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/UNetUpdate
struct UNetUpdate_tDD911C7D34BC0CE4B5C79DD46C45285E224E21B2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UNetUpdate_tDD911C7D34BC0CE4B5C79DD46C45285E224E21B2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/UpdateMasterServerInterface
struct UpdateMasterServerInterface_t1F40E6F5C301466C446578EF63381B5D1C8DA187 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateMasterServerInterface_t1F40E6F5C301466C446578EF63381B5D1C8DA187__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreLateUpdate/UpdateNetworkManager
struct UpdateNetworkManager_tBEE4C45468BA0C0DBA98B8C25FC315233267AE2C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateNetworkManager_tBEE4C45468BA0C0DBA98B8C25FC315233267AE2C__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/AIUpdate
struct AIUpdate_tACDB7E77F804905AFC0D39674778A62488A22CE2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AIUpdate_tACDB7E77F804905AFC0D39674778A62488A22CE2__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/CheckTexFieldInput
struct CheckTexFieldInput_t1FA363405F456B111E58078F4EFAB82912734432 
{
public:
	union
	{
		struct
		{
		};
		uint8_t CheckTexFieldInput_t1FA363405F456B111E58078F4EFAB82912734432__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/IMGUISendQueuedEvents
struct IMGUISendQueuedEvents_tF513CA3C17A07868E255F8D5A34C284803A22767 
{
public:
	union
	{
		struct
		{
		};
		uint8_t IMGUISendQueuedEvents_tF513CA3C17A07868E255F8D5A34C284803A22767__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/NewInputUpdate
struct NewInputUpdate_tF98FD69B5E9EAFEA02964DFFE852FF6029676308 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NewInputUpdate_tF98FD69B5E9EAFEA02964DFFE852FF6029676308__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/Physics2DUpdate
struct Physics2DUpdate_tDC29C716549E1E860FD67BF84EF243D3BA595A60 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Physics2DUpdate_tDC29C716549E1E860FD67BF84EF243D3BA595A60__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/PhysicsUpdate
struct PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25 
{
public:
	union
	{
		struct
		{
		};
		uint8_t PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/SendMouseEvents
struct SendMouseEvents_t2D84BCC439FE9A04E341AD07ECEBF4E8B12D2F9D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t SendMouseEvents_t2D84BCC439FE9A04E341AD07ECEBF4E8B12D2F9D__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/UpdateVideo
struct UpdateVideo_tE460041F5545E24C8A107B563F971F491286C0BD 
{
public:
	union
	{
		struct
		{
		};
		uint8_t UpdateVideo_tE460041F5545E24C8A107B563F971F491286C0BD__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.PreUpdate/WindUpdate
struct WindUpdate_t40BB9BF39AEE43023A49F0335A9DAC9F91E43150 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WindUpdate_t40BB9BF39AEE43023A49F0335A9DAC9F91E43150__padding[1];
	};

public:
};


// UnityEngine.Random/State
struct State_t8E62E640CAE29BF61164F51619D1C04936074C15 
{
public:
	// System.Int32 UnityEngine.Random/State::s0
	int32_t ___s0_0;
	// System.Int32 UnityEngine.Random/State::s1
	int32_t ___s1_1;
	// System.Int32 UnityEngine.Random/State::s2
	int32_t ___s2_2;
	// System.Int32 UnityEngine.Random/State::s3
	int32_t ___s3_3;

public:
	inline static int32_t get_offset_of_s0_0() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s0_0)); }
	inline int32_t get_s0_0() const { return ___s0_0; }
	inline int32_t* get_address_of_s0_0() { return &___s0_0; }
	inline void set_s0_0(int32_t value)
	{
		___s0_0 = value;
	}

	inline static int32_t get_offset_of_s1_1() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s1_1)); }
	inline int32_t get_s1_1() const { return ___s1_1; }
	inline int32_t* get_address_of_s1_1() { return &___s1_1; }
	inline void set_s1_1(int32_t value)
	{
		___s1_1 = value;
	}

	inline static int32_t get_offset_of_s2_2() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s2_2)); }
	inline int32_t get_s2_2() const { return ___s2_2; }
	inline int32_t* get_address_of_s2_2() { return &___s2_2; }
	inline void set_s2_2(int32_t value)
	{
		___s2_2 = value;
	}

	inline static int32_t get_offset_of_s3_3() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s3_3)); }
	inline int32_t get_s3_3() const { return ___s3_3; }
	inline int32_t* get_address_of_s3_3() { return &___s3_3; }
	inline void set_s3_3(int32_t value)
	{
		___s3_3 = value;
	}
};


// UnityEngine.ScriptingUtility/TestClass
struct TestClass_tE31E21A91B6A07C4CA1720FE6B57C980181F3F2C 
{
public:
	// System.Int32 UnityEngine.ScriptingUtility/TestClass::value
	int32_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(TestClass_tE31E21A91B6A07C4CA1720FE6B57C980181F3F2C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.SpookyHash/U
struct U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte* UnityEngine.SpookyHash/U::p8
			uint8_t* ___p8_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___p8_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32* UnityEngine.SpookyHash/U::p32
			uint32_t* ___p32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t* ___p32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64* UnityEngine.SpookyHash/U::p64
			uint64_t* ___p64_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t* ___p64_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.SpookyHash/U::i
			uint64_t ___i_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___i_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_p8_0() { return static_cast<int32_t>(offsetof(U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB, ___p8_0)); }
	inline uint8_t* get_p8_0() const { return ___p8_0; }
	inline uint8_t** get_address_of_p8_0() { return &___p8_0; }
	inline void set_p8_0(uint8_t* value)
	{
		___p8_0 = value;
	}

	inline static int32_t get_offset_of_p32_1() { return static_cast<int32_t>(offsetof(U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB, ___p32_1)); }
	inline uint32_t* get_p32_1() const { return ___p32_1; }
	inline uint32_t** get_address_of_p32_1() { return &___p32_1; }
	inline void set_p32_1(uint32_t* value)
	{
		___p32_1 = value;
	}

	inline static int32_t get_offset_of_p64_2() { return static_cast<int32_t>(offsetof(U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB, ___p64_2)); }
	inline uint64_t* get_p64_2() const { return ___p64_2; }
	inline uint64_t** get_address_of_p64_2() { return &___p64_2; }
	inline void set_p64_2(uint64_t* value)
	{
		___p64_2 = value;
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB, ___i_3)); }
	inline uint64_t get_i_3() const { return ___i_3; }
	inline uint64_t* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(uint64_t value)
	{
		___i_3 = value;
	}
};


// UnityEngine.PlayerLoop.TimeUpdate/WaitForLastPresentationAndUpdateTime
struct WaitForLastPresentationAndUpdateTime_tA3D3F4FF8206E94C5B3CD7F2370CED1F2E90AF88 
{
public:
	union
	{
		struct
		{
		};
		uint8_t WaitForLastPresentationAndUpdateTime_tA3D3F4FF8206E94C5B3CD7F2370CED1F2E90AF88__padding[1];
	};

public:
};


// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// UnityEngine.PlayerLoop.Update/DirectorUpdate
struct DirectorUpdate_t4A7FCDCBD027B9D28BFAFF7DEB5F33E0B5E27A85 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DirectorUpdate_t4A7FCDCBD027B9D28BFAFF7DEB5F33E0B5E27A85__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update/ScriptRunBehaviourUpdate
struct ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update/ScriptRunDelayedDynamicFrameRate
struct ScriptRunDelayedDynamicFrameRate_t1A2D15EEF198E3050B653FD370CBDFE82A46F66E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedDynamicFrameRate_t1A2D15EEF198E3050B653FD370CBDFE82A46F66E__padding[1];
	};

public:
};


// UnityEngine.PlayerLoop.Update/ScriptRunDelayedTasks
struct ScriptRunDelayedTasks_t87535B3420E907071EA14E80AD9D811F29AA978A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScriptRunDelayedTasks_t87535B3420E907071EA14E80AD9D811F29AA978A__padding[1];
	};

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
struct AngularFalloffType_tE33F65C52CF289A72D8EA70883440F4D993621E2 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.AngularFalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AngularFalloffType_tE33F65C52CF289A72D8EA70883440F4D993621E2, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.BatchRendererGroup::m_GroupHandle
	intptr_t ___m_GroupHandle_0;
	// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling UnityEngine.Rendering.BatchRendererGroup::m_PerformCulling
	OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * ___m_PerformCulling_1;

public:
	inline static int32_t get_offset_of_m_GroupHandle_0() { return static_cast<int32_t>(offsetof(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A, ___m_GroupHandle_0)); }
	inline intptr_t get_m_GroupHandle_0() const { return ___m_GroupHandle_0; }
	inline intptr_t* get_address_of_m_GroupHandle_0() { return &___m_GroupHandle_0; }
	inline void set_m_GroupHandle_0(intptr_t value)
	{
		___m_GroupHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_PerformCulling_1() { return static_cast<int32_t>(offsetof(BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A, ___m_PerformCulling_1)); }
	inline OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * get_m_PerformCulling_1() const { return ___m_PerformCulling_1; }
	inline OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB ** get_address_of_m_PerformCulling_1() { return &___m_PerformCulling_1; }
	inline void set_m_PerformCulling_1(OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * value)
	{
		___m_PerformCulling_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PerformCulling_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.BatchRendererGroup
struct BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A_marshaled_com
{
	intptr_t ___m_GroupHandle_0;
	Il2CppMethodPointer ___m_PerformCulling_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.Cookie
struct Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.Cookie::instanceID
	int32_t ___instanceID_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.Cookie::scale
	float ___scale_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.GlobalIllumination.Cookie::sizes
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sizes_2;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_sizes_2() { return static_cast<int32_t>(offsetof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B, ___sizes_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_sizes_2() const { return ___sizes_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_sizes_2() { return &___sizes_2; }
	inline void set_sizes_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___sizes_2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Rendering.LODParameters
struct LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Jobs.LowLevel.Unsafe.ScheduleMode
struct ScheduleMode_t25A6FBD7FAB995823340CBF0FDA24A3EB7D51B42 
{
public:
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.ScheduleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScheduleMode_t25A6FBD7FAB995823340CBF0FDA24A3EB7D51B42, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UnityLogWriter
struct UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:

public:
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttribute
struct VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttribute::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttribute_t9B763063E3B1705070D4DB8BC32F21F0FB30867C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.VertexAttributeFormat
struct VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485 
{
public:
	// System.Int32 UnityEngine.Rendering.VertexAttributeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexAttributeFormat_tE5FC93A96237AAF63142B0E521925CAE4F283485, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
struct BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34 
{
public:
	// System.Int32 Unity.Burst.LowLevel.BurstCompilerService/BurstLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/MonoOrStereoscopicEye
struct MonoOrStereoscopicEye_t22538A0C5043C3A233E0332787D3E06DA966703E 
{
public:
	// System.Int32 UnityEngine.Camera/MonoOrStereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoOrStereoscopicEye_t22538A0C5043C3A233E0332787D3E06DA966703E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/StereoscopicEye
struct StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3 
{
public:
	// System.Int32 UnityEngine.Camera/StereoscopicEye::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoscopicEye_t0193B972018E94F768D3B2E44CCE0E88EE2FFFD3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.FrameData/EvaluationType
struct EvaluationType_tBA04DE91FF174A833FD2C34EC61A76D94268690D 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/EvaluationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EvaluationType_tBA04DE91FF174A833FD2C34EC61A76D94268690D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.FrameData/Flags
struct Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t64F4A80C88F9E613B720DA0195BAB2B34C5307D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Mesh/MeshData
struct MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 
{
public:
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF  : public UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF
{
public:

public:
};


// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B  : public UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B
{
public:

public:
};


// UnityEngine.RectTransform/Axis
struct Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t8881AF0DB9EDF3F36FE049AA194D0206695EBF83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct ReflectionProbeEvent_tA90347B5A1B5256D229969ADF158978AF137003A 
{
public:
	// System.Int32 UnityEngine.ReflectionProbe/ReflectionProbeEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeEvent_tA90347B5A1B5256D229969ADF158978AF137003A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
struct LightmapMixedBakeModes_t517152ED1576E98EFCB29D358676919D88844F75 
{
public:
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapMixedBakeModes_t517152ED1576E98EFCB29D358676919D88844F75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
struct ReflectionProbeModes_tBE15DD8892571EBC569B7FCD5D918B0588F8EA4A 
{
public:
	// System.Int32 UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeModes_tBE15DD8892571EBC569B7FCD5D918B0588F8EA4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboard/Status
struct Status_tCF9D837EDAD10412CECD4A306BCD7CA936720FEF 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboard/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tCF9D837EDAD10412CECD4A306BCD7CA936720FEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DirectionalLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DirectionalLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DirectionalLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DirectionalLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DirectionalLight::penumbraWidthRadian
	float ___penumbraWidthRadian_7;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DirectionalLight::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_penumbraWidthRadian_7() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___penumbraWidthRadian_7)); }
	inline float get_penumbraWidthRadian_7() const { return ___penumbraWidthRadian_7; }
	inline float* get_address_of_penumbraWidthRadian_7() { return &___penumbraWidthRadian_7; }
	inline void set_penumbraWidthRadian_7(float value)
	{
		___penumbraWidthRadian_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7, ___direction_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_8() const { return ___direction_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DirectionalLight
struct DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___penumbraWidthRadian_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_8;
};

// UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.DiscLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.DiscLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.DiscLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.DiscLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.DiscLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.DiscLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.DiscLight::radius
	float ___radius_8;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.DiscLight::falloff
	uint8_t ___falloff_9;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_falloff_9() { return static_cast<int32_t>(offsetof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D, ___falloff_9)); }
	inline uint8_t get_falloff_9() const { return ___falloff_9; }
	inline uint8_t* get_address_of_falloff_9() { return &___falloff_9; }
	inline void set_falloff_9(uint8_t value)
	{
		___falloff_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.DiscLight
struct DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___radius_8;
	uint8_t ___falloff_9;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.PointLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.PointLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.PointLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.PointLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.PointLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::range
	float ___range_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.PointLight::sphereRadius
	float ___sphereRadius_7;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.PointLight::falloff
	uint8_t ___falloff_8;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___color_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_4() const { return ___color_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_indirectColor_5() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___indirectColor_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_5() const { return ___indirectColor_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_5() { return &___indirectColor_5; }
	inline void set_indirectColor_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_5 = value;
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___range_6)); }
	inline float get_range_6() const { return ___range_6; }
	inline float* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(float value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_sphereRadius_7() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___sphereRadius_7)); }
	inline float get_sphereRadius_7() const { return ___sphereRadius_7; }
	inline float* get_address_of_sphereRadius_7() { return &___sphereRadius_7; }
	inline void set_sphereRadius_7(float value)
	{
		___sphereRadius_7 = value;
	}

	inline static int32_t get_offset_of_falloff_8() { return static_cast<int32_t>(offsetof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E, ___falloff_8)); }
	inline uint8_t get_falloff_8() const { return ___falloff_8; }
	inline uint8_t* get_address_of_falloff_8() { return &___falloff_8; }
	inline void set_falloff_8(uint8_t value)
	{
		___falloff_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	float ___range_6;
	float ___sphereRadius_7;
	uint8_t ___falloff_8;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.PointLight
struct PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_5;
	float ___range_6;
	float ___sphereRadius_7;
	uint8_t ___falloff_8;
};

// UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.RectangleLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.RectangleLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.RectangleLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.RectangleLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.RectangleLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.RectangleLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::width
	float ___width_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.RectangleLight::height
	float ___height_9;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.RectangleLight::falloff
	uint8_t ___falloff_10;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_width_8() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___width_8)); }
	inline float get_width_8() const { return ___width_8; }
	inline float* get_address_of_width_8() { return &___width_8; }
	inline void set_width_8(float value)
	{
		___width_8 = value;
	}

	inline static int32_t get_offset_of_height_9() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___height_9)); }
	inline float get_height_9() const { return ___height_9; }
	inline float* get_address_of_height_9() { return &___height_9; }
	inline void set_height_9(float value)
	{
		___height_9 = value;
	}

	inline static int32_t get_offset_of_falloff_10() { return static_cast<int32_t>(offsetof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985, ___falloff_10)); }
	inline uint8_t get_falloff_10() const { return ___falloff_10; }
	inline uint8_t* get_address_of_falloff_10() { return &___falloff_10; }
	inline void set_falloff_10(uint8_t value)
	{
		___falloff_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.RectangleLight
struct RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___width_8;
	float ___height_9;
	uint8_t ___falloff_10;
};

// UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.SpotLight::instanceID
	int32_t ___instanceID_0;
	// System.Boolean UnityEngine.Experimental.GlobalIllumination.SpotLight::shadow
	bool ___shadow_1;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.SpotLight::mode
	uint8_t ___mode_2;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.SpotLight::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.SpotLight::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.SpotLight::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::sphereRadius
	float ___sphereRadius_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::coneAngle
	float ___coneAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.SpotLight::innerConeAngle
	float ___innerConeAngle_10;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::falloff
	uint8_t ___falloff_11;
	// UnityEngine.Experimental.GlobalIllumination.AngularFalloffType UnityEngine.Experimental.GlobalIllumination.SpotLight::angularFalloff
	uint8_t ___angularFalloff_12;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_shadow_1() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___shadow_1)); }
	inline bool get_shadow_1() const { return ___shadow_1; }
	inline bool* get_address_of_shadow_1() { return &___shadow_1; }
	inline void set_shadow_1(bool value)
	{
		___shadow_1 = value;
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___mode_2)); }
	inline uint8_t get_mode_2() const { return ___mode_2; }
	inline uint8_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(uint8_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___position_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_3() const { return ___position_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_orientation_4() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___orientation_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_4() const { return ___orientation_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_4() { return &___orientation_4; }
	inline void set_orientation_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_4 = value;
	}

	inline static int32_t get_offset_of_color_5() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___color_5)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_5() const { return ___color_5; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_5() { return &___color_5; }
	inline void set_color_5(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_5 = value;
	}

	inline static int32_t get_offset_of_indirectColor_6() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___indirectColor_6)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_6() const { return ___indirectColor_6; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_6() { return &___indirectColor_6; }
	inline void set_indirectColor_6(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_sphereRadius_8() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___sphereRadius_8)); }
	inline float get_sphereRadius_8() const { return ___sphereRadius_8; }
	inline float* get_address_of_sphereRadius_8() { return &___sphereRadius_8; }
	inline void set_sphereRadius_8(float value)
	{
		___sphereRadius_8 = value;
	}

	inline static int32_t get_offset_of_coneAngle_9() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___coneAngle_9)); }
	inline float get_coneAngle_9() const { return ___coneAngle_9; }
	inline float* get_address_of_coneAngle_9() { return &___coneAngle_9; }
	inline void set_coneAngle_9(float value)
	{
		___coneAngle_9 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_10() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___innerConeAngle_10)); }
	inline float get_innerConeAngle_10() const { return ___innerConeAngle_10; }
	inline float* get_address_of_innerConeAngle_10() { return &___innerConeAngle_10; }
	inline void set_innerConeAngle_10(float value)
	{
		___innerConeAngle_10 = value;
	}

	inline static int32_t get_offset_of_falloff_11() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___falloff_11)); }
	inline uint8_t get_falloff_11() const { return ___falloff_11; }
	inline uint8_t* get_address_of_falloff_11() { return &___falloff_11; }
	inline void set_falloff_11(uint8_t value)
	{
		___falloff_11 = value;
	}

	inline static int32_t get_offset_of_angularFalloff_12() { return static_cast<int32_t>(offsetof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D, ___angularFalloff_12)); }
	inline uint8_t get_angularFalloff_12() const { return ___angularFalloff_12; }
	inline uint8_t* get_address_of_angularFalloff_12() { return &___angularFalloff_12; }
	inline void set_angularFalloff_12(uint8_t value)
	{
		___angularFalloff_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshaled_pinvoke
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};
// Native definition for COM marshalling of UnityEngine.Experimental.GlobalIllumination.SpotLight
struct SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D_marshaled_com
{
	int32_t ___instanceID_0;
	int32_t ___shadow_1;
	uint8_t ___mode_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_3;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_4;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_5;
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_6;
	float ___range_7;
	float ___sphereRadius_8;
	float ___coneAngle_9;
	float ___innerConeAngle_10;
	uint8_t ___falloff_11;
	uint8_t ___angularFalloff_12;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters
struct JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8 
{
public:
	// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::Dependency
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___Dependency_0;
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::ScheduleMode
	int32_t ___ScheduleMode_1;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::ReflectionData
	intptr_t ___ReflectionData_2;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::JobDataPtr
	intptr_t ___JobDataPtr_3;

public:
	inline static int32_t get_offset_of_Dependency_0() { return static_cast<int32_t>(offsetof(JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8, ___Dependency_0)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_Dependency_0() const { return ___Dependency_0; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_Dependency_0() { return &___Dependency_0; }
	inline void set_Dependency_0(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___Dependency_0 = value;
	}

	inline static int32_t get_offset_of_ScheduleMode_1() { return static_cast<int32_t>(offsetof(JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8, ___ScheduleMode_1)); }
	inline int32_t get_ScheduleMode_1() const { return ___ScheduleMode_1; }
	inline int32_t* get_address_of_ScheduleMode_1() { return &___ScheduleMode_1; }
	inline void set_ScheduleMode_1(int32_t value)
	{
		___ScheduleMode_1 = value;
	}

	inline static int32_t get_offset_of_ReflectionData_2() { return static_cast<int32_t>(offsetof(JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8, ___ReflectionData_2)); }
	inline intptr_t get_ReflectionData_2() const { return ___ReflectionData_2; }
	inline intptr_t* get_address_of_ReflectionData_2() { return &___ReflectionData_2; }
	inline void set_ReflectionData_2(intptr_t value)
	{
		___ReflectionData_2 = value;
	}

	inline static int32_t get_offset_of_JobDataPtr_3() { return static_cast<int32_t>(offsetof(JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8, ___JobDataPtr_3)); }
	inline intptr_t get_JobDataPtr_3() const { return ___JobDataPtr_3; }
	inline intptr_t* get_address_of_JobDataPtr_3() { return &___JobDataPtr_3; }
	inline void set_JobDataPtr_3(intptr_t value)
	{
		___JobDataPtr_3 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Rendering.BatchCullingContext
struct BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Plane> UnityEngine.Rendering.BatchCullingContext::cullingPlanes
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  ___cullingPlanes_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility> UnityEngine.Rendering.BatchCullingContext::batchVisibility
	NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  ___batchVisibility_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___visibleIndices_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.Rendering.BatchCullingContext::visibleIndicesY
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___visibleIndicesY_3;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.BatchCullingContext::lodParameters
	LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  ___lodParameters_4;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.BatchCullingContext::cullingMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cullingMatrix_5;
	// System.Single UnityEngine.Rendering.BatchCullingContext::nearPlane
	float ___nearPlane_6;

public:
	inline static int32_t get_offset_of_cullingPlanes_0() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___cullingPlanes_0)); }
	inline NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  get_cullingPlanes_0() const { return ___cullingPlanes_0; }
	inline NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E * get_address_of_cullingPlanes_0() { return &___cullingPlanes_0; }
	inline void set_cullingPlanes_0(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  value)
	{
		___cullingPlanes_0 = value;
	}

	inline static int32_t get_offset_of_batchVisibility_1() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___batchVisibility_1)); }
	inline NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  get_batchVisibility_1() const { return ___batchVisibility_1; }
	inline NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA * get_address_of_batchVisibility_1() { return &___batchVisibility_1; }
	inline void set_batchVisibility_1(NativeArray_1_t18D233A2E30E28048C1252473AFD0799557294DA  value)
	{
		___batchVisibility_1 = value;
	}

	inline static int32_t get_offset_of_visibleIndices_2() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___visibleIndices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_visibleIndices_2() const { return ___visibleIndices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_visibleIndices_2() { return &___visibleIndices_2; }
	inline void set_visibleIndices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___visibleIndices_2 = value;
	}

	inline static int32_t get_offset_of_visibleIndicesY_3() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___visibleIndicesY_3)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_visibleIndicesY_3() const { return ___visibleIndicesY_3; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_visibleIndicesY_3() { return &___visibleIndicesY_3; }
	inline void set_visibleIndicesY_3(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___visibleIndicesY_3 = value;
	}

	inline static int32_t get_offset_of_lodParameters_4() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___lodParameters_4)); }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  get_lodParameters_4() const { return ___lodParameters_4; }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD * get_address_of_lodParameters_4() { return &___lodParameters_4; }
	inline void set_lodParameters_4(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  value)
	{
		___lodParameters_4 = value;
	}

	inline static int32_t get_offset_of_cullingMatrix_5() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___cullingMatrix_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cullingMatrix_5() const { return ___cullingMatrix_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cullingMatrix_5() { return &___cullingMatrix_5; }
	inline void set_cullingMatrix_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cullingMatrix_5 = value;
	}

	inline static int32_t get_offset_of_nearPlane_6() { return static_cast<int32_t>(offsetof(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66, ___nearPlane_6)); }
	inline float get_nearPlane_6() const { return ___nearPlane_6; }
	inline float* get_address_of_nearPlane_6() { return &___nearPlane_6; }
	inline void set_nearPlane_6(float value)
	{
		___nearPlane_6 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3  : public SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___m_AsyncWorkQueue_6;
	// System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_CurrentFrameWork
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___m_CurrentFrameWork_7;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_8;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_TrackedCount
	int32_t ___m_TrackedCount_9;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_6() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_AsyncWorkQueue_6)); }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * get_m_AsyncWorkQueue_6() const { return ___m_AsyncWorkQueue_6; }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA ** get_address_of_m_AsyncWorkQueue_6() { return &___m_AsyncWorkQueue_6; }
	inline void set_m_AsyncWorkQueue_6(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * value)
	{
		___m_AsyncWorkQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AsyncWorkQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentFrameWork_7() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_CurrentFrameWork_7)); }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * get_m_CurrentFrameWork_7() const { return ___m_CurrentFrameWork_7; }
	inline List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA ** get_address_of_m_CurrentFrameWork_7() { return &___m_CurrentFrameWork_7; }
	inline void set_m_CurrentFrameWork_7(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * value)
	{
		___m_CurrentFrameWork_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentFrameWork_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_8() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_MainThreadID_8)); }
	inline int32_t get_m_MainThreadID_8() const { return ___m_MainThreadID_8; }
	inline int32_t* get_address_of_m_MainThreadID_8() { return &___m_MainThreadID_8; }
	inline void set_m_MainThreadID_8(int32_t value)
	{
		___m_MainThreadID_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackedCount_9() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3, ___m_TrackedCount_9)); }
	inline int32_t get_m_TrackedCount_9() const { return ___m_TrackedCount_9; }
	inline int32_t* get_address_of_m_TrackedCount_9() { return &___m_TrackedCount_9; }
	inline void set_m_TrackedCount_9(int32_t value)
	{
		___m_TrackedCount_9 = value;
	}
};


// UnityEngine.Application/LogCallback
struct LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.CullingGroup/StateChanged
struct StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate
struct RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
struct OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Light_tA2F349FE839781469A0344CF6039B51512394275 * m_Items[1];

public:
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>[]
struct KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  m_Items[1];

public:
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  m_Items[1];

public:
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_gshared (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, const RuntimeMethod* method);
// System.Void System.Console::SetOut(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_SetOut_m5496747868AA56C75F16C326E5C282C204FFCCCA (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___newOut0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C (TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
inline void List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, int32_t, const RuntimeMethod*))List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_gshared)(__this, ___capacity0, method);
}
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391 (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Add(!0)
inline void List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*))List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Clear()
inline void List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, const RuntimeMethod*))List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Item(System.Int32)
inline WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, int32_t, const RuntimeMethod*))List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Remove(!0)
inline bool List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025 (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 , const RuntimeMethod*))List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
inline int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *, const RuntimeMethod*))List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, int32_t ___mainThreadID0, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext_SetSynchronizationContext_m0307B8FDCDC2A4D2C25B7DB20CF60B00E72CE04B (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___syncContext0, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942 (const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UnitySynchronizationContext::HasPendingTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353 (void* ___destination0, uint8_t ___value1, int64_t ___size2, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittableValueType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittableValueType_mC548D28E3E1FF39148C8A2D745A30AB6122485B7 (Type_t * ___t0, const RuntimeMethod* method);
// System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility::GetReasonForTypeNonBlittableImpl(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF (Type_t * ___t0, String_t* ___name1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9 (String_t* ___fmt0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m7EB52A67AE3584E8A1E8CAC550708DF13520F529_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector2Int::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m608D5CEF9835892DD989B0891D7AE6F2FC0FBE02 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector2Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Slerp_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, float ___t2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::Equals(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE2CEEF2FE79B510472A930F80DDB56E23B39CC11_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mE3102EAE8E76A05DD7344009C2617BA34CDD3C08 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3Int::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_m8C32AEB68C6D46DA1F2546378067687007FCF6A5 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_mF13025AB50754BB9C9E98659216EC0B79F1CAA61 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Magnitude_m8CBF814EA5D3E71943D6445380D49BB2C87249C7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Division_m8AF7C92DD640CE3275F975E9BCD62F04E29DEDB6_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_Normalize_m7A8D4174077CFDAD54230B767A8EA946D65EC2EA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.YieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m04ED4EACCB01E49DEC7E0E5A83789068A3525BC2_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE (CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::.ctor(System.Void*,System.IntPtr,Unity.Jobs.JobHandle,Unity.Jobs.LowLevel.Unsafe.ScheduleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobScheduleParameters__ctor_m7BAC662AF5FA4A96429644CC676D3179A5B143F8 (JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8 * __this, void* ___i_jobData0, intptr_t ___i_reflectionData1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___i_dependency2, int32_t ___i_scheduleMode3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, const RuntimeMethod* method);
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0 (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DirectionalLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mCBEC26CC920C0D87DF6E25417533923E26CB6DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 * ___dir1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DirectionalLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m135DF5CF6CBECA4CBA0AC71F9CDEEF8DE25606DB (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.PointLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mB11D8F3B35F96E176A89517A25CD1A54DCBD7D6E (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E * ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.PointLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m4E8BEBD383D5F6F1A1EDFEC763A718A7271C22A6 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.SpotLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mB1572C38F682F043180745B7A231FBE07CD205E4 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D * ___spot1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.SpotLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mC9948FAC4A191C99E3E7D94677B7CFD241857C86 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.RectangleLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mEABF77895D51E1CA5FD380682539C3DD3FC8A91C (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 * ___rect1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.RectangleLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mA0DF9747C6AD308EAAF2A9530B4225A3D65BB092 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightmapperUtils::Extract(UnityEngine.Light,UnityEngine.Experimental.GlobalIllumination.DiscLight&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m93B350DDA0CB5B624054835BAF46C177472E9212 (Light_tA2F349FE839781469A0344CF6039B51512394275 * ___l0, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D * ___disc1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::Init(UnityEngine.Experimental.GlobalIllumination.DiscLight&,UnityEngine.Experimental.GlobalIllumination.Cookie&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB96C3F3E00F10DD0806BD3DB93B58C2299D59E94 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D * ___light0, Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B * ___cookie1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.GlobalIllumination.LightDataGI::InitNoBake(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57 (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * __this, int32_t ___lightInstanceID0, const RuntimeMethod* method);
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, const RuntimeMethod*))UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>::.ctor()
inline void UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B (UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5380899C55F3CD7FD1CD64F13EE5E1E4B11D602B *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpookyHash/U::.ctor(System.UInt16*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U__ctor_m29915B03ADD0CB26085DB325B7FC87C4A5134C01 (U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB * __this, uint16_t* ___p80, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void System.Text.EncoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4 (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Void System.Text.DecoderReplacementFallback::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253 (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * __this, String_t* ___replacement0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32,System.Text.EncoderFallback,System.Text.DecoderFallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_GetEncoding_m4DC46FF0C923994EDEE21980037198E27A75E4F2 (int32_t ___codepage0, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback1, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback2, const RuntimeMethod* method);
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * __this, bool ___bigEndian0, bool ___byteOrderMark1, bool ___throwOnInvalidCharacters2, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, bool ___throwOnInvalidBytes2, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449 (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * __this, bool ___encoderShouldEmitUTF8Identifier0, bool ___throwOnInvalidBytes1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Byte[],System.Text.Encoding>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___key0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20 (String_t* ___s0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___s0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0012;
	}

IL_000b:
	{
		String_t* L_2 = ___s0;
		UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F(L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F (String_t* ___s0, const RuntimeMethod* method)
{
	typedef void (*UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn) (String_t*);
	static UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)");
	_il2cpp_icall_func(___s0);
}
// System.Void UnityEngine.UnityLogWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Init_m84D1792BF114717225B36DD1AA45DC1201BA77FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * L_0 = (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D *)il2cpp_codegen_object_new(UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D_il2cpp_TypeInfo_var);
		UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_SetOut_m5496747868AA56C75F16C326E5C282C204FFCCCA(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m26CB2B40367CCA97725387637F0457998DED9230 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&___value0), /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m256BEE6E2FB31EEFCD721BFEE676653E9CD00AD1 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		UnityLogWriter_WriteStringToUnityLog_m7DF2A8AB78591F20C87B8947A22D2C845F207A20(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m28FD8721A9896EE519A36770139213E697C57372 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		String_t* L_3;
		L_3 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLogImpl_mBD8544A13E44C89FF1BCBD8685EDB0D1E760487F(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_mB7AF0B7C8C546F210699D5F3AA23F370F1963A25 (UnityLogWriter_tE5B63755F8D9007732535B3BBF7DA8B26939119D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_il2cpp_TypeInfo_var);
		TextWriter__ctor_m9C6FF4B9607BA4D452BECA38EA8F7E1499A13A6C(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, int32_t ___mainThreadID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_CurrentFrameWork_7(L_0);
		__this->set_m_TrackedCount_9(0);
		SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(__this, /*hidden argument*/NULL);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_1, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_AsyncWorkQueue_6(L_1);
		int32_t L_2 = ___mainThreadID0;
		__this->set_m_MainThreadID_8(L_2);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::.ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * ___queue0, int32_t ___mainThreadID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA *)il2cpp_codegen_object_new(List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA_il2cpp_TypeInfo_var);
		List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45(L_0, ((int32_t)20), /*hidden argument*/List_1__ctor_m5C056BA6406A6A524D53C63DB351ADE09B64DC45_RuntimeMethod_var);
		__this->set_m_CurrentFrameWork_7(L_0);
		__this->set_m_TrackedCount_9(0);
		SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(__this, /*hidden argument*/NULL);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = ___queue0;
		__this->set_m_AsyncWorkQueue_6(L_1);
		int32_t L_2 = ___mainThreadID1;
		__this->set_m_MainThreadID_8(L_2);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_mEDA081A69B18358B9239E2A46E570466E5FA77F7 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_m_MainThreadID_8();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1;
		L_1 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_4 = ___callback0;
		RuntimeObject * L_5 = ___state1;
		NullCheck(L_4);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0023:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_6 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_6, (bool)0, /*hidden argument*/NULL);
		V_1 = L_6;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_7 = __this->get_m_AsyncWorkQueue_6();
			V_2 = L_7;
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_8 = V_2;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_8, /*hidden argument*/NULL);
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_9 = __this->get_m_AsyncWorkQueue_6();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_10 = ___callback0;
			RuntimeObject * L_11 = ___state1;
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_12 = V_1;
			WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_13;
			memset((&L_13), 0, sizeof(L_13));
			WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603((&L_13), L_10, L_11, L_12, /*hidden argument*/NULL);
			NullCheck(L_9);
			List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557(L_9, L_13, /*hidden argument*/List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
			IL2CPP_LEAVE(0x5A, FINALLY_0052);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_14 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(82)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5A, IL_005a)
		}

IL_005a:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_15 = V_1;
			NullCheck(L_15);
			bool L_16;
			L_16 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_15);
			IL2CPP_LEAVE(0x6F, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_17 = V_1;
			if (!L_17)
			{
				goto IL_006e;
			}
		}

IL_0067:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_18 = V_1;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_006e:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
	}

IL_006f:
	{
	}

IL_0070:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_mE3277DB5A0DCB461E497EC7B9C13850D4E7AB076 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_6();
		V_0 = L_0;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_2 = __this->get_m_AsyncWorkQueue_6();
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_5;
		memset((&L_5), 0, sizeof(L_5));
		WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603((&L_5), L_3, L_4, (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)NULL, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557(L_2, L_5, /*hidden argument*/List_1_Add_m96F42497282DDF4656497FD9B0CF0C8FC4ACC557_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Threading.SynchronizationContext UnityEngine.UnitySynchronizationContext::CreateCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * UnitySynchronizationContext_CreateCopy_mBB5F2E7947732680B0715AD92187E89211AE5E61 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * V_0 = NULL;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_6();
		int32_t L_1 = __this->get_m_MainThreadID_8();
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_2 = (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m266FAB5B25698C86EC1AC37CE4BBA1FA244BB4FC(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81 (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * V_0 = NULL;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_6();
		V_0 = L_0;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_2 = __this->get_m_CurrentFrameWork_7();
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_3 = __this->get_m_AsyncWorkQueue_6();
		NullCheck(L_2);
		List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907(L_2, L_3, /*hidden argument*/List_1_AddRange_m2D7540B01275552CA127202F40536B5D5831A907_RuntimeMethod_var);
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_4 = __this->get_m_AsyncWorkQueue_6();
		NullCheck(L_4);
		List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E(L_4, /*hidden argument*/List_1_Clear_m38FF3BFEF5EF5F96F6B84F59AEC29C695C4CFD4E_RuntimeMethod_var);
		IL2CPP_LEAVE(0x39, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		goto IL_005f;
	}

IL_003b:
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_6 = __this->get_m_CurrentFrameWork_7();
		NullCheck(L_6);
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_7;
		L_7 = List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_RuntimeMethod_var);
		V_1 = L_7;
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_8 = __this->get_m_CurrentFrameWork_7();
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025(L_8, L_9, /*hidden argument*/List_1_Remove_m5CE622FEE2BD41D0769D74CDDAD0EA55C07A2025_RuntimeMethod_var);
		WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20((WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *)(&V_1), /*hidden argument*/NULL);
	}

IL_005f:
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_11 = __this->get_m_CurrentFrameWork_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline(L_11, /*hidden argument*/List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.UnitySynchronizationContext::HasPendingTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * L_0 = __this->get_m_AsyncWorkQueue_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_inline(L_0, /*hidden argument*/List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->get_m_TrackedCount_9();
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::InitializeSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_InitializeSynchronizationContext_mB581D86F8675566DC3A885C15DC5B9A7B8D42CD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0;
		L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m7818C94F78A2DE2C7C278F6EA24B31F2BB758FD0(L_0, /*hidden argument*/NULL);
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_2 = (UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_mF71A02778FCC672CC2FE4F329D9D6C66C96F70CF(L_2, L_1, /*hidden argument*/NULL);
		SynchronizationContext_SetSynchronizationContext_m0307B8FDCDC2A4D2C25B7DB20CF60B00E72CE04B(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::ExecuteTasks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_ExecuteTasks_m323E27C0CD442B806D966D024725D9809563E0DD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * V_0 = NULL;
	bool V_1 = false;
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0;
		L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_3 = V_0;
		NullCheck(L_3);
		UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81(L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.UnitySynchronizationContext::ExecutePendingTasks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySynchronizationContext_ExecutePendingTasks_m7FD629962A8BA72CB2F51583DC393A8FDA672DBC (int64_t ___millisecondsTimeout0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * V_0 = NULL;
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_0;
		L_0 = SynchronizationContext_get_Current_m4841CFFADFD0F0D82CE91800EE1225926440B942(/*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_1 = V_0;
		V_2 = (bool)((((RuntimeObject*)(UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0062;
	}

IL_0019:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_3 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_4 = V_1;
		NullCheck(L_4);
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE(L_4, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0028:
	{
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_5 = V_1;
		NullCheck(L_5);
		int64_t L_6;
		L_6 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5(L_5, /*hidden argument*/NULL);
		int64_t L_7 = ___millisecondsTimeout0;
		V_4 = (bool)((((int64_t)L_6) > ((int64_t)L_7))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_0056;
	}

IL_003b:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_9 = V_0;
		NullCheck(L_9);
		UnitySynchronizationContext_Exec_mC89E49BFB922E69AAE753887480031A142016F81(L_9, /*hidden argument*/NULL);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0028;
		}
	}

IL_0056:
	{
		UnitySynchronizationContext_t9971A8B24E203428BF2E715ECC6019EE2D77EAD3 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14;
		L_14 = UnitySynchronizationContext_HasPendingTasks_mBA93E72DC46200231B7ABCFB5F22FB0617A1B1EA(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0062;
	}

IL_0062:
	{
		bool L_15 = V_3;
		return L_15;
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
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method)
{
	typedef void* (*UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6_ftn) (int64_t, int32_t, int32_t);
	static UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)");
	void* icallRetVal = _il2cpp_icall_func(___size0, ___alignment1, ___allocator2);
	return icallRetVal;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn) (void*, int32_t);
	static UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)");
	_il2cpp_icall_func(___memory0, ___allocator1);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn) (void*, void*, int64_t);
	static UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)");
	_il2cpp_icall_func(___destination0, ___source1, ___size2);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyReplicate_m4724970D3BA65FA9044C477CAA5CFD7EC2BB66B3 (void* ___destination0, void* ___source1, int32_t ___size2, int32_t ___count3, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_MemCpyReplicate_m4724970D3BA65FA9044C477CAA5CFD7EC2BB66B3_ftn) (void*, void*, int32_t, int32_t);
	static UnsafeUtility_MemCpyReplicate_m4724970D3BA65FA9044C477CAA5CFD7EC2BB66B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_MemCpyReplicate_m4724970D3BA65FA9044C477CAA5CFD7EC2BB66B3_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)");
	_il2cpp_icall_func(___destination0, ___source1, ___size2, ___count3);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_m7400D82DAD703E11E46C7E80BCD69CE531E152BB (void* ___destination0, int32_t ___destinationStride1, void* ___source2, int32_t ___sourceStride3, int32_t ___elementSize4, int32_t ___count5, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_MemCpyStride_m7400D82DAD703E11E46C7E80BCD69CE531E152BB_ftn) (void*, int32_t, void*, int32_t, int32_t, int32_t);
	static UnsafeUtility_MemCpyStride_m7400D82DAD703E11E46C7E80BCD69CE531E152BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_MemCpyStride_m7400D82DAD703E11E46C7E80BCD69CE531E152BB_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___destination0, ___destinationStride1, ___source2, ___sourceStride3, ___elementSize4, ___count5);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353 (void* ___destination0, uint8_t ___value1, int64_t ___size2, const RuntimeMethod* method)
{
	typedef void (*UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353_ftn) (void*, uint8_t, int64_t);
	static UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)");
	_il2cpp_icall_func(___destination0, ___value1, ___size2);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int64_t L_1 = ___size1;
		UnsafeUtility_MemSet_m963D137A8DADF01067A68EFDEF736E7216411353((void*)(void*)L_0, (uint8_t)0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_mE364EE2E10DCC0FF112874221FFD07C7C3E08676 (Type_t * ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*UnsafeUtility_SizeOf_mE364EE2E10DCC0FF112874221FFD07C7C3E08676_ftn) (Type_t *);
	static UnsafeUtility_SizeOf_mE364EE2E10DCC0FF112874221FFD07C7C3E08676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_SizeOf_mE364EE2E10DCC0FF112874221FFD07C7C3E08676_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf(System.Type)");
	int32_t icallRetVal = _il2cpp_icall_func(___type0);
	return icallRetVal;
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47 (Type_t * ___type0, const RuntimeMethod* method)
{
	typedef bool (*UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47_ftn) (Type_t *);
	static UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47_ftn)il2cpp_codegen_resolve_icall ("Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittable(System.Type)");
	bool icallRetVal = _il2cpp_icall_func(___type0);
	return icallRetVal;
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsBlittableValueType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittableValueType_mC548D28E3E1FF39148C8A2D745A30AB6122485B7 (Type_t * ___t0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_2 = ___t0;
		bool L_3;
		L_3 = UnsafeUtility_IsBlittable_mC76E5617EC7CA98CC232702004D71915DDBF1D47(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility::GetReasonForTypeNonBlittableImpl(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF (Type_t * ___t0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17EEFBC9408FC4C31361C306483409E765FBAF81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1F8DBD872D411FFE2231413691AA7FBCFE180B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_4 = NULL;
	int32_t V_5 = 0;
	FieldInfo_t * V_6 = NULL;
	bool V_7 = false;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_3 = ___name1;
		Type_t * L_4 = ___t0;
		String_t* L_5;
		L_5 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralC1F8DBD872D411FFE2231413691AA7FBCFE180B5, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_00a4;
	}

IL_0020:
	{
		Type_t * L_6 = ___t0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_9 = ___name1;
		Type_t * L_10 = ___t0;
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral17EEFBC9408FC4C31361C306483409E765FBAF81, L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_00a4;
	}

IL_0039:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Type_t * L_12 = ___t0;
		NullCheck(L_12);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_13;
		L_13 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_12, ((int32_t)52));
		V_4 = L_13;
		V_5 = 0;
		goto IL_0098;
	}

IL_004f:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		FieldInfo_t * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		FieldInfo_t * L_18 = V_6;
		NullCheck(L_18);
		Type_t * L_19;
		L_19 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		bool L_20;
		L_20 = UnsafeUtility_IsBlittableValueType_mC548D28E3E1FF39148C8A2D745A30AB6122485B7(L_19, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_22 = V_0;
		FieldInfo_t * L_23 = V_6;
		NullCheck(L_23);
		Type_t * L_24;
		L_24 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_23);
		String_t* L_25 = ___name1;
		FieldInfo_t * L_26 = V_6;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_26);
		String_t* L_28;
		L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1517117F1C97F9858A0CAB40CD0F7B384BE59539, L_25, L_27, /*hidden argument*/NULL);
		String_t* L_29;
		L_29 = UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF(L_24, L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
	}

IL_0091:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_32 = V_5;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_33 = V_4;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_34 = V_0;
		V_2 = L_34;
		goto IL_00a4;
	}

IL_00a4:
	{
		String_t* L_35 = V_2;
		return L_35;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::IsArrayBlittable(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsArrayBlittable_m1F4CE4F21EF62AF1D4BC1F7A0C520745814BC959 (RuntimeArray * ___arr0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeArray * L_0 = ___arr0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(94 /* System.Type System.Type::GetElementType() */, L_1);
		bool L_3;
		L_3 = UnsafeUtility_IsBlittableValueType_mC548D28E3E1FF39148C8A2D745A30AB6122485B7(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Unity.Collections.LowLevel.Unsafe.UnsafeUtility::GetReasonForArrayNonBlittable(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForArrayNonBlittable_m451743E99803EC89E4397135323169DF87D9F620 (RuntimeArray * ___arr0, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeArray * L_0 = ___arr0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(94 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = UnsafeUtility_GetReasonForTypeNonBlittableImpl_mCB0D7E72BB113F1628B2FEFDEB175FDC1A6ED5DF(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_7 = V_1;
		return L_7;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = __this->get_x_0();
		V_2 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = __this->get_y_1();
		V_2 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926_RuntimeMethod_var)));
	}

IL_002d:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  float Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector2_get_Item_m0F685FCCDE8FEFF108591D73A6D9F048CCEC5926(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = ___value1;
		__this->set_x_0(L_4);
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = ___value1;
		__this->set_y_1(L_5);
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	Vector2_set_Item_m817FDD0709F52F09ECBB949C29DEE88E73889CAD(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline(_thisAdjusted, ___x0, ___y1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Scale_m54AA203304585B8BB6ECA4936A90F408BD880916 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2;
		L_2 = Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector2::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_0();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8;
		L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_1();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13;
		L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		String_t* L_14;
		L_14 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_9, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_15 = V_1;
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2_ToString_m503AFEA3F57B8529C047FF93C2E72126C5591C23(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3;
		L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)__this, ((*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)UnBox(L_2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2_Equals_m67A842D914AA5A4DCC076E9EA20019925E6A85A0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_AdjustorThunk (RuntimeObject * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))))));
		V_0 = ((float)((float)L_4));
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * _thisAdjusted = reinterpret_cast<Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)))))));
		V_2 = ((float)((float)L_12));
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_mC2F6F1199AD28D4518D74C7C0A9371722126102A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Min(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Min_m074AF7C8FD9AFB6CFA5E43311285572B916CD101 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		float L_4;
		L_4 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_1, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___lhs0;
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___rhs1;
		float L_8 = L_7.get_y_1();
		float L_9;
		L_9 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002b;
	}

IL_002b:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Max(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Max_mE5AD9A94D637F61BF11843D73214857F974C6701 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		float L_4;
		L_4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_1, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___lhs0;
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___rhs1;
		float L_8 = L_7.get_y_1();
		float L_9;
		L_9 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_6, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002b;
	}

IL_002b:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_1/(float)L_3)), ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_UnaryNegation_mA3AA3A53CD43237B0BA7AC57C09A0468A940D7C5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mA9E4245E487F3051F0EBF086646A1C341213D24E (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->get_zeroVector_2();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->get_oneVector_3();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->get_upVector_4();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->get_rightVector_7();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Vector2::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__cctor_m64DC76912D71BE91E6A3B2D15D63452E2B3AD6EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_zeroVector_2(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_oneVector_3(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_upVector_4(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_downVector_5(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_leftVector_6(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_rightVector_7(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_positiveInfinityVector_8(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var))->set_negativeInfinityVector_9(L_7);
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
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector2Int::set_x(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector2Int::set_y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Y_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_AdjustorThunk (RuntimeObject * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline(_thisAdjusted, ___x0, ___y1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2Int::op_Implicit(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2Int_op_Implicit_m74C29CAFE091CE873934FAF6300CD01461D7FE6B (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___v0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___v0), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), ((float)((float)L_0)), ((float)((float)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Vector2Int::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m7EB52A67AE3584E8A1E8CAC550708DF13520F529 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, ((*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)UnBox(L_2, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector2Int_Equals_m7EB52A67AE3584E8A1E8CAC550708DF13520F529_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2Int_Equals_m7EB52A67AE3584E8A1E8CAC550708DF13520F529_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_AdjustorThunk (RuntimeObject * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector2Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2;
		L_2 = Vector2Int_ToString_m608D5CEF9835892DD989B0891D7AE6F2FC0FBE02((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2Int_ToString_m7928A3CC56D9CAAB370F6B3EE797CED4BE9B9B20(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector2Int::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Int_ToString_m608D5CEF9835892DD989B0891D7AE6F2FC0FBE02 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___format0;
		RuntimeObject* L_4 = ___formatProvider1;
		String_t* L_5;
		L_5 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_1;
		int32_t L_7;
		L_7 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = ___format0;
		RuntimeObject* L_9 = ___formatProvider1;
		String_t* L_10;
		L_10 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		String_t* L_11;
		L_11 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_6, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C  String_t* Vector2Int_ToString_m608D5CEF9835892DD989B0891D7AE6F2FC0FBE02_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * _thisAdjusted = reinterpret_cast<Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector2Int_ToString_m608D5CEF9835892DD989B0891D7AE6F2FC0FBE02(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector2Int::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Int__cctor_mB461BECA877E11B4B65206DFAA8A8C66170861F2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_0), 0, 0, /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_Zero_2(L_0);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_1), 1, 1, /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_One_3(L_1);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_2), 0, 1, /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_Up_4(L_2);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_3), 0, (-1), /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_Down_5(L_3);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_4), (-1), 0, /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_Left_6(L_4);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_5), 1, 0, /*hidden argument*/NULL);
		((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))->set_s_Right_7(L_5);
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
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___a0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___b1), L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Vector3::OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, const RuntimeMethod* method)
{
	typedef void (*Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6_ftn) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___a0, ___b1);
}
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_OrthoNormalize_m4D0DA9DFEE300B3A4965FAB1F8CB77468BF9F2A1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___tangent1, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___normal0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___tangent1;
		Vector3_OrthoNormalize2_m569EE92448DA705CD5E7B45A51E95FF8A7EBB6A6((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_LerpUnclamped_m7096F8833FE606F7DB0E39E42D4C6FD1438CF73F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_x_2();
		float L_6 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___a0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___b1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___a0;
		float L_12 = L_11.get_y_3();
		float L_13 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___a0;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___b1;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___a0;
		float L_19 = L_18.get_z_4();
		float L_20 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)L_6)))), ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)), (float)L_13)))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		return L_22;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___target1;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___current0;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___target1;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___current0;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___target1;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___current0;
		float L_11 = L_10.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)((double)L_25)));
		V_4 = ((float)((float)L_26));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___current0;
		float L_28 = L_27.get_x_2();
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = ___current0;
		float L_33 = L_32.get_y_3();
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = ___current0;
		float L_38 = L_37.get_z_4();
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_42), ((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_29/(float)L_30)), (float)L_31)))), ((float)il2cpp_codegen_add((float)L_33, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_34/(float)L_35)), (float)L_36)))), ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_39/(float)L_40)), (float)L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_6;
		return L_43;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m9A5DAA30AE33A5A93820F4696B30572152A017FD (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	bool V_22 = false;
	float V_23 = 0.0f;
	bool V_24 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_25;
	memset((&V_25), 0, sizeof(V_25));
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (0.0f);
		float L_0 = ___smoothTime3;
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((9.99999975E-05f), L_0, /*hidden argument*/NULL);
		___smoothTime3 = L_1;
		float L_2 = ___smoothTime3;
		V_3 = ((float)((float)(2.0f)/(float)L_2));
		float L_3 = V_3;
		float L_4 = ___deltaTime5;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		float L_5 = V_4;
		float L_6 = V_4;
		float L_7 = V_4;
		float L_8 = V_4;
		float L_9 = V_4;
		float L_10 = V_4;
		V_5 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.479999989f), (float)L_6)), (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(0.234999999f), (float)L_8)), (float)L_9)), (float)L_10))))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___current0;
		float L_12 = L_11.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___target1;
		float L_14 = L_13.get_x_2();
		V_6 = ((float)il2cpp_codegen_subtract((float)L_12, (float)L_14));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___current0;
		float L_16 = L_15.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___target1;
		float L_18 = L_17.get_y_3();
		V_7 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = ___current0;
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___target1;
		float L_22 = L_21.get_z_4();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_20, (float)L_22));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = ___target1;
		V_9 = L_23;
		float L_24 = ___maxSpeed4;
		float L_25 = ___smoothTime3;
		V_10 = ((float)il2cpp_codegen_multiply((float)L_24, (float)L_25));
		float L_26 = V_10;
		float L_27 = V_10;
		V_11 = ((float)il2cpp_codegen_multiply((float)L_26, (float)L_27));
		float L_28 = V_6;
		float L_29 = V_6;
		float L_30 = V_7;
		float L_31 = V_7;
		float L_32 = V_8;
		float L_33 = V_8;
		V_12 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)), (float)((float)il2cpp_codegen_multiply((float)L_30, (float)L_31)))), (float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33))));
		float L_34 = V_12;
		float L_35 = V_11;
		V_22 = (bool)((((float)L_34) > ((float)L_35))? 1 : 0);
		bool L_36 = V_22;
		if (!L_36)
		{
			goto IL_00e0;
		}
	}
	{
		float L_37 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_38;
		L_38 = sqrt(((double)((double)L_37)));
		V_23 = ((float)((float)L_38));
		float L_39 = V_6;
		float L_40 = V_23;
		float L_41 = V_10;
		V_6 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_39/(float)L_40)), (float)L_41));
		float L_42 = V_7;
		float L_43 = V_23;
		float L_44 = V_10;
		V_7 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44));
		float L_45 = V_8;
		float L_46 = V_23;
		float L_47 = V_10;
		V_8 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_45/(float)L_46)), (float)L_47));
	}

IL_00e0:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = ___current0;
		float L_49 = L_48.get_x_2();
		float L_50 = V_6;
		(&___target1)->set_x_2(((float)il2cpp_codegen_subtract((float)L_49, (float)L_50)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = ___current0;
		float L_52 = L_51.get_y_3();
		float L_53 = V_7;
		(&___target1)->set_y_3(((float)il2cpp_codegen_subtract((float)L_52, (float)L_53)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = ___current0;
		float L_55 = L_54.get_z_4();
		float L_56 = V_8;
		(&___target1)->set_z_4(((float)il2cpp_codegen_subtract((float)L_55, (float)L_56)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_57 = ___currentVelocity2;
		float L_58 = L_57->get_x_2();
		float L_59 = V_3;
		float L_60 = V_6;
		float L_61 = ___deltaTime5;
		V_13 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_58, (float)((float)il2cpp_codegen_multiply((float)L_59, (float)L_60)))), (float)L_61));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_62 = ___currentVelocity2;
		float L_63 = L_62->get_y_3();
		float L_64 = V_3;
		float L_65 = V_7;
		float L_66 = ___deltaTime5;
		V_14 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_63, (float)((float)il2cpp_codegen_multiply((float)L_64, (float)L_65)))), (float)L_66));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_67 = ___currentVelocity2;
		float L_68 = L_67->get_z_4();
		float L_69 = V_3;
		float L_70 = V_8;
		float L_71 = ___deltaTime5;
		V_15 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_68, (float)((float)il2cpp_codegen_multiply((float)L_69, (float)L_70)))), (float)L_71));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_72 = ___currentVelocity2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_73 = ___currentVelocity2;
		float L_74 = L_73->get_x_2();
		float L_75 = V_3;
		float L_76 = V_13;
		float L_77 = V_5;
		L_72->set_x_2(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_74, (float)((float)il2cpp_codegen_multiply((float)L_75, (float)L_76)))), (float)L_77)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_78 = ___currentVelocity2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_79 = ___currentVelocity2;
		float L_80 = L_79->get_y_3();
		float L_81 = V_3;
		float L_82 = V_14;
		float L_83 = V_5;
		L_78->set_y_3(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_80, (float)((float)il2cpp_codegen_multiply((float)L_81, (float)L_82)))), (float)L_83)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_84 = ___currentVelocity2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_85 = ___currentVelocity2;
		float L_86 = L_85->get_z_4();
		float L_87 = V_3;
		float L_88 = V_15;
		float L_89 = V_5;
		L_84->set_z_4(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_86, (float)((float)il2cpp_codegen_multiply((float)L_87, (float)L_88)))), (float)L_89)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = ___target1;
		float L_91 = L_90.get_x_2();
		float L_92 = V_6;
		float L_93 = V_13;
		float L_94 = V_5;
		V_0 = ((float)il2cpp_codegen_add((float)L_91, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_92, (float)L_93)), (float)L_94))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = ___target1;
		float L_96 = L_95.get_y_3();
		float L_97 = V_7;
		float L_98 = V_14;
		float L_99 = V_5;
		V_1 = ((float)il2cpp_codegen_add((float)L_96, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_97, (float)L_98)), (float)L_99))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = ___target1;
		float L_101 = L_100.get_z_4();
		float L_102 = V_8;
		float L_103 = V_15;
		float L_104 = V_5;
		V_2 = ((float)il2cpp_codegen_add((float)L_101, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_102, (float)L_103)), (float)L_104))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = V_9;
		float L_106 = L_105.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = ___current0;
		float L_108 = L_107.get_x_2();
		V_16 = ((float)il2cpp_codegen_subtract((float)L_106, (float)L_108));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109 = V_9;
		float L_110 = L_109.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111 = ___current0;
		float L_112 = L_111.get_y_3();
		V_17 = ((float)il2cpp_codegen_subtract((float)L_110, (float)L_112));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_9;
		float L_114 = L_113.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115 = ___current0;
		float L_116 = L_115.get_z_4();
		V_18 = ((float)il2cpp_codegen_subtract((float)L_114, (float)L_116));
		float L_117 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118 = V_9;
		float L_119 = L_118.get_x_2();
		V_19 = ((float)il2cpp_codegen_subtract((float)L_117, (float)L_119));
		float L_120 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121 = V_9;
		float L_122 = L_121.get_y_3();
		V_20 = ((float)il2cpp_codegen_subtract((float)L_120, (float)L_122));
		float L_123 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_124 = V_9;
		float L_125 = L_124.get_z_4();
		V_21 = ((float)il2cpp_codegen_subtract((float)L_123, (float)L_125));
		float L_126 = V_16;
		float L_127 = V_19;
		float L_128 = V_17;
		float L_129 = V_20;
		float L_130 = V_18;
		float L_131 = V_21;
		V_24 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_126, (float)L_127)), (float)((float)il2cpp_codegen_multiply((float)L_128, (float)L_129)))), (float)((float)il2cpp_codegen_multiply((float)L_130, (float)L_131))))) > ((float)(0.0f)))? 1 : 0);
		bool L_132 = V_24;
		if (!L_132)
		{
			goto IL_026b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_133 = V_9;
		float L_134 = L_133.get_x_2();
		V_0 = L_134;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135 = V_9;
		float L_136 = L_135.get_y_3();
		V_1 = L_136;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_137 = V_9;
		float L_138 = L_137.get_z_4();
		V_2 = L_138;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_139 = ___currentVelocity2;
		float L_140 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_141 = V_9;
		float L_142 = L_141.get_x_2();
		float L_143 = ___deltaTime5;
		L_139->set_x_2(((float)((float)((float)il2cpp_codegen_subtract((float)L_140, (float)L_142))/(float)L_143)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_144 = ___currentVelocity2;
		float L_145 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146 = V_9;
		float L_147 = L_146.get_y_3();
		float L_148 = ___deltaTime5;
		L_144->set_y_3(((float)((float)((float)il2cpp_codegen_subtract((float)L_145, (float)L_147))/(float)L_148)));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_149 = ___currentVelocity2;
		float L_150 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151 = V_9;
		float L_152 = L_151.get_z_4();
		float L_153 = ___deltaTime5;
		L_149->set_z_4(((float)((float)((float)il2cpp_codegen_subtract((float)L_150, (float)L_152))/(float)L_153)));
	}

IL_026b:
	{
		float L_154 = V_0;
		float L_155 = V_1;
		float L_156 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
		memset((&L_157), 0, sizeof(L_157));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_157), L_154, L_155, L_156, /*hidden argument*/NULL);
		V_25 = L_157;
		goto IL_0277;
	}

IL_0277:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = V_25;
		return L_158;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->get_x_2();
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->get_y_3();
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->get_z_4();
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  float Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_get_Item_m7E5B57E02F6873804F40DD48F8BEA00247AFF5AC(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___value1;
		__this->set_x_2(L_3);
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___value1;
		__this->set_y_3(L_4);
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___value1;
		__this->set_z_4(L_5);
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3_set_Item_mF3E5D7FFAD5F81973283AE6C1D15C9B238AEE346(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline(_thisAdjusted, ___x0, ___y1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___lhs0;
		float L_13 = L_12.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___rhs1;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___lhs0;
		float L_17 = L_16.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___rhs1;
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___lhs0;
		float L_21 = L_20.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ___rhs1;
		float L_23 = L_22.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15)))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)L_19)), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_0;
		return L_25;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_2();
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_3();
		int32_t L_3;
		L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_4();
		int32_t L_5;
		L_5 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this, ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_Equals_m210CB160B594355581D44D4B87CF3D3994ABFED0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___other0;
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___other0;
		float L_5 = L_4.get_y_3();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___other0;
		float L_8 = L_7.get_z_4();
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Vector3::Reflect(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Reflect_m46273855FA396DF91C2EE4780B8F227C96C8A024 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___inNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___inDirection0;
		float L_2;
		L_2 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_2));
		float L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___inNormal1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___inDirection0;
		float L_7 = L_6.get_x_2();
		float L_8 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___inNormal1;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___inDirection0;
		float L_12 = L_11.get_y_3();
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___inNormal1;
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___inDirection0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_5)), (float)L_7)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10)), (float)L_12)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15)), (float)L_17)), /*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0044;
	}

IL_0044:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_1;
		return L_19;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this);
		float L_1;
		L_1 = Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this);
		float L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_4, L_5, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_Normalize_m7C9B0E84BCB84D54A16D1212F3DE5AB2A386FCD9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Project_m57D54B16F36E620C294F4B209CD4C8E46A58D1B6 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___onNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___onNormal1;
		float L_2;
		L_2 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___onNormal1;
		float L_9;
		L_9 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_7, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___onNormal1;
		float L_11 = L_10.get_x_2();
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = ___onNormal1;
		float L_15 = L_14.get_y_3();
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___onNormal1;
		float L_19 = L_18.get_z_4();
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12))/(float)L_13)), ((float)((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16))/(float)L_17)), ((float)((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))/(float)L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		return L_23;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ProjectOnPlane_m066BDEFD60B2828C4B531CD96C4DBFADF6B0EF3B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___planeNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___planeNormal1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vector0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_7, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___planeNormal1;
		float L_13 = L_12.get_x_2();
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___vector0;
		float L_17 = L_16.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___planeNormal1;
		float L_19 = L_18.get_y_3();
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = ___vector0;
		float L_23 = L_22.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = ___planeNormal1;
		float L_25 = L_24.get_z_4();
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), ((float)il2cpp_codegen_subtract((float)L_11, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_14))/(float)L_15)))), ((float)il2cpp_codegen_subtract((float)L_17, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20))/(float)L_21)))), ((float)il2cpp_codegen_subtract((float)L_23, (float)((float)((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26))/(float)L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_2;
		return L_29;
	}
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___from0), /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___to1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((double)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)))));
		V_0 = ((float)((float)L_2));
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_7/(float)L_8)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)((double)L_10)));
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)(57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___from0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___to1;
		float L_2;
		L_2 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___from0;
		float L_4 = L_3.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___to1;
		float L_6 = L_5.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___from0;
		float L_8 = L_7.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___to1;
		float L_10 = L_9.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_10))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___from0;
		float L_12 = L_11.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___to1;
		float L_14 = L_13.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___from0;
		float L_16 = L_15.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = ___to1;
		float L_18 = L_17.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_18))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = ___from0;
		float L_20 = L_19.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = ___to1;
		float L_22 = L_21.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = ___from0;
		float L_24 = L_23.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = ___to1;
		float L_26 = L_25.get_x_2();
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_22)), (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_26))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___axis2;
		float L_28 = L_27.get_x_2();
		float L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ___axis2;
		float L_31 = L_30.get_y_3();
		float L_32 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = ___axis2;
		float L_34 = L_33.get_z_4();
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)), (float)((float)il2cpp_codegen_multiply((float)L_31, (float)L_32)))), (float)((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)))), /*hidden argument*/NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)))))));
		V_3 = ((float)((float)L_18));
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___vector0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___maxLength1;
		float L_3 = ___maxLength1;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((double)L_5)));
		V_2 = ((float)((float)L_6));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___vector0;
		float L_8 = L_7.get_x_2();
		float L_9 = V_2;
		V_3 = ((float)((float)L_8/(float)L_9));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_y_3();
		float L_12 = V_2;
		V_4 = ((float)((float)L_11/(float)L_12));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___vector0;
		float L_14 = L_13.get_z_4();
		float L_15 = V_2;
		V_5 = ((float)((float)L_14/(float)L_15));
		float L_16 = V_3;
		float L_17 = ___maxLength1;
		float L_18 = V_4;
		float L_19 = ___maxLength1;
		float L_20 = V_5;
		float L_21 = ___maxLength1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), ((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), ((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = ___vector0;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_6;
		return L_24;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))))));
		V_0 = ((float)((float)L_12));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_2();
		float L_1 = __this->get_x_2();
		float L_2 = __this->get_y_3();
		float L_3 = __this->get_y_3();
		float L_4 = __this->get_z_4();
		float L_5 = __this->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))))));
		V_0 = ((float)((float)L_6));
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m286141DAE9BF2AD40B0FA58C1D97B5773327A5B9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_2();
		float L_1 = __this->get_x_2();
		float L_2 = __this->get_y_3();
		float L_3 = __this->get_y_3();
		float L_4 = __this->get_z_4();
		float L_5 = __this->get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___lhs0;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___rhs1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_6, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___lhs0;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___rhs1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		float L_4;
		L_4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___lhs0;
		float L_6 = L_5.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___rhs1;
		float L_8 = L_7.get_y_3();
		float L_9;
		L_9 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_6, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___lhs0;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___rhs1;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_11, L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_4, L_9, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_003c;
	}

IL_003c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_oneVector_6();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_forwardVector_11();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_backVector_12();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_upVector_7();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_downVector_8();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_leftVector_9();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->get_rightVector_10();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)))), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2;
		L_2 = Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector3::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_2();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8;
		L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_3();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13;
		L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		float* L_15 = __this->get_address_of_z_4();
		String_t* L_16 = ___format0;
		RuntimeObject* L_17 = ___formatProvider1;
		String_t* L_18;
		L_18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		String_t* L_19;
		L_19 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_14, /*hidden argument*/NULL);
		V_1 = L_19;
		goto IL_0055;
	}

IL_0055:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * _thisAdjusted = reinterpret_cast<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3_ToString_m8E771CC90555B06B8BDBA5F691EC5D8D87D68414(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__cctor_m1630C6F57B6D41EFCDFC7A10F52A4D2448BFB2E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_upVector_7(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_downVector_8(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_leftVector_9(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_rightVector_10(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_forwardVector_11(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_backVector_12(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_positiveInfinityVector_13(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))->set_negativeInfinityVector_14(L_9);
		return;
	}
}
// System.Void UnityEngine.Vector3::Slerp_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___b1, float ___t2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___ret3, const RuntimeMethod* method)
{
	typedef void (*Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664_ftn) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *, float, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_Slerp_Injected_mCA257B222F4DF81E19FC6EC32CE68D551940E664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::Slerp_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___a0, ___b1, ___t2, ___ret3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Z_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector3Int::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_AdjustorThunk (RuntimeObject * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Boolean UnityEngine.Vector3Int::op_Equality(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3Int::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE2CEEF2FE79B510472A930F80DDB56E23B39CC11 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, ((*(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)UnBox(L_2, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector3Int_Equals_mE2CEEF2FE79B510472A930F80DDB56E23B39CC11_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3Int_Equals_mE2CEEF2FE79B510472A930F80DDB56E23B39CC11_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector3Int::Equals(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (*(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___other0;
		bool L_2;
		L_2 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_AdjustorThunk (RuntimeObject * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Vector3Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mE3102EAE8E76A05DD7344009C2617BA34CDD3C08 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_2), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_2), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5^(int32_t)((int32_t)((int32_t)L_6<<(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)28)))))^(int32_t)((int32_t)((int32_t)L_8>>(int32_t)4))))^(int32_t)((int32_t)((int32_t)L_9<<(int32_t)((int32_t)28)))));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t Vector3Int_GetHashCode_mE3102EAE8E76A05DD7344009C2617BA34CDD3C08_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector3Int_GetHashCode_mE3102EAE8E76A05DD7344009C2617BA34CDD3C08(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector3Int::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_mF13025AB50754BB9C9E98659216EC0B79F1CAA61 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2;
		L_2 = Vector3Int_ToString_m8C32AEB68C6D46DA1F2546378067687007FCF6A5((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3Int_ToString_mF13025AB50754BB9C9E98659216EC0B79F1CAA61_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3Int_ToString_mF13025AB50754BB9C9E98659216EC0B79F1CAA61(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector3Int::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Int_ToString_m8C32AEB68C6D46DA1F2546378067687007FCF6A5 (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		int32_t L_2;
		L_2 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___format0;
		RuntimeObject* L_4 = ___formatProvider1;
		String_t* L_5;
		L_5 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_1;
		int32_t L_7;
		L_7 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = ___format0;
		RuntimeObject* L_9 = ___formatProvider1;
		String_t* L_10;
		L_10 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_6;
		int32_t L_12;
		L_12 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = ___format0;
		RuntimeObject* L_14 = ___formatProvider1;
		String_t* L_15;
		L_15 = Int32_ToString_m246774E1922012AE787EB97743F42CB798B70CD8((int32_t*)(&V_0), L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		String_t* L_16;
		L_16 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_11, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_004d;
	}

IL_004d:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* Vector3Int_ToString_m8C32AEB68C6D46DA1F2546378067687007FCF6A5_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * _thisAdjusted = reinterpret_cast<Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector3Int_ToString_m8C32AEB68C6D46DA1F2546378067687007FCF6A5(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector3Int::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Int__cctor_m2EC94FD622152EE49C25C960DE1DEB83A3212283 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_0), 0, 0, 0, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Zero_3(L_0);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_1), 1, 1, 1, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_One_4(L_1);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_2), 0, 1, 0, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Up_5(L_2);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_3), 0, (-1), 0, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Down_6(L_3);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_4), (-1), 0, 0, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Left_7(L_4);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_5), 1, 0, 0, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Right_8(L_5);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_6), 0, 0, 1, /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Forward_9(L_6);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline((&L_7), 0, 0, (-1), /*hidden argument*/NULL);
		((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields*)il2cpp_codegen_static_fields_for(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))->set_s_Back_10(L_7);
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
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->get_x_1();
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->get_y_2();
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->get_z_3();
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->get_w_4();
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_7 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector4_get_Item_m469B9D88498D0F7CD14B71A9512915BAA0B9B3B7(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = ___value1;
		__this->set_x_1(L_3);
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = ___value1;
		__this->set_y_2(L_4);
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = ___value1;
		__this->set_z_3(L_5);
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = ___value1;
		__this->set_w_4(L_6);
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_7 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A_RuntimeMethod_var)));
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	Vector4_set_Item_m7552B288FF218CA023F0DFB971BBA30D0362006A(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_1(L_0);
		float L_1 = ___y1;
		__this->set_y_2(L_1);
		float L_2 = ___z2;
		__this->set_z_3(L_2);
		float L_3 = ___w3;
		__this->set_w_4(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_Lerp_m3D0C60E9155ADC907763450A987474243F550EDD (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___a0;
		float L_3 = L_2.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___b1;
		float L_5 = L_4.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_x_1();
		float L_8 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = ___b1;
		float L_12 = L_11.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = ___a0;
		float L_14 = L_13.get_y_2();
		float L_15 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16 = ___a0;
		float L_17 = L_16.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18 = ___b1;
		float L_19 = L_18.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_20 = ___a0;
		float L_21 = L_20.get_z_3();
		float L_22 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_23 = ___a0;
		float L_24 = L_23.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_25 = ___b1;
		float L_26 = L_25.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_27 = ___a0;
		float L_28 = L_27.get_w_4();
		float L_29 = ___t2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_30), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), ((float)il2cpp_codegen_add((float)L_24, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_28)), (float)L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_31 = V_0;
		return L_31;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_1();
		int32_t L_1;
		L_1 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_2();
		int32_t L_3;
		L_3 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_3();
		int32_t L_5;
		L_5 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_4();
		int32_t L_7;
		L_7 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector4_GetHashCode_mCA7B312F8CA141F6F25BABDDF406F3D2BDD5E895(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this, ((*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)UnBox(L_2, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector4_Equals_m71D14F39651C3FBEDE17214455DFA727921F07AA(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___other0;
		float L_2 = L_1.get_x_1();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___other0;
		float L_5 = L_4.get_y_2();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___other0;
		float L_8 = L_7.get_z_3();
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___other0;
		float L_11 = L_10.get_w_4();
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_AdjustorThunk (RuntimeObject * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_Normalize_m7A8D4174077CFDAD54230B767A8EA946D65EC2EA (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1;
		L_1 = Vector4_Magnitude_m8CBF814EA5D3E71943D6445380D49BB2C87249C7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___a0;
		float L_5 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = Vector4_op_Division_m8AF7C92DD640CE3275F975E9BCD62F04E29DEDB6_inline(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		L_7 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = Vector4_Normalize_m7A8D4174077CFDAD54230B767A8EA946D65EC2EA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  _returnValue;
	_returnValue = Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___b1;
		float L_3 = L_2.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___a0;
		float L_5 = L_4.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___b1;
		float L_7 = L_6.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___a0;
		float L_9 = L_8.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___b1;
		float L_11 = L_10.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___a0;
		float L_13 = L_12.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___b1;
		float L_15 = L_14.get_w_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_Magnitude_m8CBF814EA5D3E71943D6445380D49BB2C87249C7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___a0;
		float L_2;
		L_2 = Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)((double)L_2)));
		V_0 = ((float)((float)L_3));
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this);
		float L_2;
		L_2 = Vector4_Dot_m3373C73B23A0BC07DDE8B9C99AA2FC933CD1143F(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	float _returnValue;
	_returnValue = Vector4_get_sqrMagnitude_m1450744F6AAD57773CE0208B6F51DDEEE9A48E07(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_one_m59B707729B52E58A045A6DE2ACDDE1D1600F48A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->get_oneVector_6();
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Division_m8AF7C92DD640CE3275F975E9BCD62F04E29DEDB6 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), ((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___lhs0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___rhs1;
		float L_3 = L_2.get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___lhs0;
		float L_5 = L_4.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___rhs1;
		float L_7 = L_6.get_y_2();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___lhs0;
		float L_9 = L_8.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___rhs1;
		float L_11 = L_10.get_z_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___lhs0;
		float L_13 = L_12.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___rhs1;
		float L_15 = L_14.get_w_4();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m2B976EE8649EE1AE9DE1771CEE183AC70E3A75B7 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___lhs0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___v0;
		float L_5 = L_4.get_z_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___v0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___v0;
		float L_3 = L_2.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___v0;
		float L_5 = L_4.get_z_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector4_op_Implicit_m3A59F157B9B8A3C2DD495B6F9B76F3C0D40BDFCC (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___v0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___v0;
		float L_3 = L_2.get_y_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.Vector4::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		String_t* L_2;
		L_2 = Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)__this, (String_t*)NULL, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector4_ToString_mF2D17142EBD75E91BC718B3E347F614AC45E9040(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.Vector4::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___format0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___format0 = _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
	}

IL_0012:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_3;
		float* L_5 = __this->get_address_of_x_1();
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___formatProvider1;
		String_t* L_8;
		L_8 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_4;
		float* L_10 = __this->get_address_of_y_2();
		String_t* L_11 = ___format0;
		RuntimeObject* L_12 = ___formatProvider1;
		String_t* L_13;
		L_13 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_10, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		float* L_15 = __this->get_address_of_z_3();
		String_t* L_16 = ___format0;
		RuntimeObject* L_17 = ___formatProvider1;
		String_t* L_18;
		L_18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_15, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = L_14;
		float* L_20 = __this->get_address_of_w_4();
		String_t* L_21 = ___format0;
		RuntimeObject* L_22 = ___formatProvider1;
		String_t* L_23;
		L_23 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B((float*)L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		String_t* L_24;
		L_24 = UnityString_Format_m7A07C068ED408DD06F634070770FB55F13AA4EC9(_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05, L_19, /*hidden argument*/NULL);
		V_1 = L_24;
		goto IL_0065;
	}

IL_0065:
	{
		String_t* L_25 = V_1;
		return L_25;
	}
}
IL2CPP_EXTERN_C  String_t* Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * _thisAdjusted = reinterpret_cast<Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector4_ToString_m0EC6AA83CD606E3EB5BE60108A1D9AC4ECB5517A(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Void UnityEngine.Vector4::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__cctor_m35F167F24C48A767EAD837754896B5A5178C078A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_2), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_positiveInfinityVector_7(L_2);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_3), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var))->set_negativeInfinityVector_8(L_3);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_mB566493FB99A315BEF348791DE943A89E4B71F9C (WaitForFixedUpdate_t675FCE2AEFAC5C924A4020474C997FF2CDD3F4C5 * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_back(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_pinvoke_cleanup(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com_back(const WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled, WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
IL2CPP_EXTERN_C void WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshal_com_cleanup(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
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
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m04ED4EACCB01E49DEC7E0E5A83789068A3525BC2 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CwaitTimeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.WaitForSecondsRealtime::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForSecondsRealtime_get_keepWaiting_m96E9697A6DA22E3537EE2ED3823523C05838844D (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		float L_0 = __this->get_m_WaitUntilTime_1();
		V_1 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_3;
		L_3 = WaitForSecondsRealtime_get_waitTime_m04ED4EACCB01E49DEC7E0E5A83789068A3525BC2_inline(__this, /*hidden argument*/NULL);
		__this->set_m_WaitUntilTime_1(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
	}

IL_0026:
	{
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_5 = __this->get_m_WaitUntilTime_1();
		V_0 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_0;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.CustomYieldInstruction::Reset() */, __this);
	}

IL_0045:
	{
		bool L_8 = V_0;
		V_3 = L_8;
		goto IL_0049;
	}

IL_0049:
	{
		bool L_9 = V_3;
		return L_9;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
		CustomYieldInstruction__ctor_m01929E3EEB78B751510038B32D889061960DA1BE(__this, /*hidden argument*/NULL);
		float L_0 = ___time0;
		WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_Reset_m6CB6F149A3EC3BA4ADB6A78FD8A05F82246E9B01 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
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
// System.Void Unity.Collections.LowLevel.Unsafe.WriteAccessRequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteAccessRequiredAttribute__ctor_m832267CA67398C994C2B666B00253CD9959610B9 (WriteAccessRequiredAttribute_t801D798894A40E3789DE39CC4BE0D3B04B852DCA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_back(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_pinvoke_cleanup(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com_back(const YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled, YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
IL2CPP_EXTERN_C void YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshal_com_cleanup(YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mD8203310B47F2C36BED3EEC00CA1944C9D941AEF (YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___condition0' to native representation
	char* ____condition0_marshaled = NULL;
	____condition0_marshaled = il2cpp_codegen_marshal_string(___condition0);

	// Marshaling of parameter '___stackTrace1' to native representation
	char* ____stackTrace1_marshaled = NULL;
	____stackTrace1_marshaled = il2cpp_codegen_marshal_string(___stackTrace1);

	// Native function invocation
	il2cppPInvokeFunc(____condition0_marshaled, ____stackTrace1_marshaled, ___type2);

	// Marshaling cleanup of parameter '___condition0' native representation
	il2cpp_codegen_marshal_free(____condition0_marshaled);
	____condition0_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace1' native representation
	il2cpp_codegen_marshal_free(____stackTrace1_marshaled);
	____stackTrace1_marshaled = NULL;

}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_mB5F165ECC180A20258EF4EFF589D88FB9F9E9C57 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_Invoke_m5503AB0FDB4D9D1A8FFE13283321AF278B7F6C4E (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, ___condition0, ___stackTrace1, ___type2);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, ___condition0, ___stackTrace1, ___type2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___condition0, ___stackTrace1, ___type2);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___condition0, ___stackTrace1, ___type2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___condition0, ___stackTrace1, ___type2);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(targetMethod, targetThis, ___condition0, ___stackTrace1, ___type2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___condition0, ___stackTrace1, ___type2);
					else
						VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___condition0, ___stackTrace1, ___type2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___condition0, ___stackTrace1, ___type2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___condition0, ___stackTrace1, ___type2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallback_BeginInvoke_m346CFB69BAB75EF96F9EBA2B3C312A1AD1D4147F (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, String_t* ___condition0, String_t* ___stackTrace1, int32_t ___type2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition0;
	__d_args[1] = ___stackTrace1;
	__d_args[2] = Box(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773_il2cpp_TypeInfo_var, &___type2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback_EndInvoke_m940C8D1C936259607F04EA27DA8FBB2828FC9280 (LogCallback_t8C3C9B1E0F185E2A25D09DE10DD8414898698BBD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Application/LowMemoryCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback__ctor_m91C04CE7D7A323B50CA6A73B23949639E1EA53C3 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Application/LowMemoryCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback_Invoke_mDF9C72A7F7CD34CC8FAED88642864AE193742437 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Application/LowMemoryCallback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowMemoryCallback_BeginInvoke_mF446F2B2F047BC877D3819B38D1CB0AFC4C4D953 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Application/LowMemoryCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowMemoryCallback_EndInvoke_mB653B34015F110168720FED3201FDD6D2B235212 (LowMemoryCallback_tF94AC614EDACA9AD4CEA3DE77FF8EFF5DA1E5240 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_m1862F8A67E8CA14A19B80DE61BBC1881DF945E9F (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  OnPerformCulling_Invoke_m804E8422831E63707E5582FBBBFEF08E8A100525 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A * ___rendererGroup0, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  ___cullingContext1, const RuntimeMethod* method)
{
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
			}
			else
			{
				// closed
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (void*, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___rendererGroup0, ___cullingContext1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, ___rendererGroup0, ___cullingContext1);
					else
						result = GenericVirtFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, ___rendererGroup0, ___cullingContext1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___rendererGroup0, ___cullingContext1);
					else
						result = VirtFuncInvoker1< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___rendererGroup0, ___cullingContext1);
				}
			}
			else
			{
				typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, targetThis, ___rendererGroup0, ___cullingContext1);
					else
						result = GenericVirtFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(targetMethod, targetThis, ___rendererGroup0, ___cullingContext1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rendererGroup0, ___cullingContext1);
					else
						result = VirtFuncInvoker2< JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 , BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rendererGroup0, ___cullingContext1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___rendererGroup0, ___cullingContext1, targetMethod);
				}
				else
				{
					typedef JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  (*FunctionPointerType) (void*, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A *, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___rendererGroup0, ___cullingContext1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::BeginInvoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPerformCulling_BeginInvoke_mAF6E29B6BAC52D4DCAD0C87B8C6939B94566EAA1 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, BatchRendererGroup_t68C1EAC6F7158DC1C02C16D4E343397D5EC4574A * ___rendererGroup0, BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66  ___cullingContext1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___rendererGroup0;
	__d_args[1] = Box(BatchCullingContext_t26E634F354C4F3915108C34A32FD32118FFE1F66_il2cpp_TypeInfo_var, &___cullingContext1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  OnPerformCulling_EndInvoke_m643216ACF662C78BD6F98E09FA5AA45F92E2F9F0 (OnPerformCulling_t44E5FE326B88CD7B1F07F3DDD2433D2D70161AEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_back(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099>(marshaled.___callback_1, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_pinvoke_cleanup(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled)
{
	marshaled.___order_0 = unmarshaled.get_order_0();
	marshaled.___callback_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_callback_1()));
}
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com_back(const OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled, OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_order_temp_0 = 0;
	unmarshaled_order_temp_0 = marshaled.___order_0;
	unmarshaled.set_order_0(unmarshaled_order_temp_0);
	unmarshaled.set_callback_1(il2cpp_codegen_marshal_function_ptr_to_delegate<UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099>(marshaled.___callback_1, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.BeforeRenderHelper/OrderBlock
IL2CPP_EXTERN_C void OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshal_com_cleanup(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback__ctor_m6E26A220911F56F3E8936DDD217ED76A15B1915E (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_Invoke_m52ACC6D0C6BA5A247A24DB9C63D4340B2EF97B24 (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___cam0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___cam0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___cam0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___cam0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___cam0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___cam0);
					else
						GenericVirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(targetMethod, targetThis, ___cam0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___cam0);
					else
						VirtActionInvoker1< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___cam0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___cam0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___cam0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraCallback_BeginInvoke_m7DD0D3DB7F6ACCBFE090C1E2EEE9BBD065A0925D (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCallback_EndInvoke_m2CF9596F172FF401AAF5A606BE966E3D08F62DB9 (CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Camera/RenderRequest
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke(const RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94& unmarshaled, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_ResultRT_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ResultRT' of type 'RenderRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ResultRT_1Exception, NULL);
}
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_back(const RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke& marshaled, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94& unmarshaled)
{
	Exception_t* ___m_ResultRT_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ResultRT' of type 'RenderRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ResultRT_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Camera/RenderRequest
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_pinvoke_cleanup(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Camera/RenderRequest
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_com(const RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94& unmarshaled, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com& marshaled)
{
	Exception_t* ___m_ResultRT_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ResultRT' of type 'RenderRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ResultRT_1Exception, NULL);
}
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_com_back(const RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com& marshaled, RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94& unmarshaled)
{
	Exception_t* ___m_ResultRT_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_ResultRT' of type 'RenderRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_ResultRT_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Camera/RenderRequest
IL2CPP_EXTERN_C void RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshal_com_cleanup(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___sphere0);

}
// System.Void UnityEngine.CullingGroup/StateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged__ctor_mBBB5FB739CB1D1206034FFDE998AE8342CC5C0C2 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.CullingGroup/StateChanged::Invoke(UnityEngine.CullingGroupEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_Invoke_m6CD13C3770E1EB709C4B125F69F7E4CE6539814D (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sphere0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sphere0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(targetMethod, targetThis, ___sphere0);
					else
						GenericVirtActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(targetMethod, targetThis, ___sphere0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sphere0);
					else
						VirtActionInvoker1< CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sphere0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___sphere0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sphere0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.CullingGroup/StateChanged::BeginInvoke(UnityEngine.CullingGroupEvent,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChanged_BeginInvoke_m70DAA3720650BA61CA34446A5E19736213E82D4D (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C  ___sphere0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(CullingGroupEvent_t58E1718FD0A5FC5037538BD223DCF1385014185C_il2cpp_TypeInfo_var, &___sphere0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.CullingGroup/StateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_EndInvoke_m742AAC097C6A02605BF7FB6AA283CA24C021ED65 (StateChanged_tAE96F0A8860BFCD704179F6C1F376A6FAE3E25E0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate__ctor_mE01841FD1E938AA63EF9D1153CB40E44543A78BE (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate_Invoke_mBABCF33A27A4E0A5FBC06AECECA79FBF4293E7F9 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisplaysUpdatedDelegate_BeginInvoke_m42DDA570D68BFAD055E2FEBB75FBE79EFEE2752F (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaysUpdatedDelegate_EndInvoke_mBE00DC8335AF5142275DCCE3C5CEBC4ED0F60937 (DisplaysUpdatedDelegate_tC6A6AD44FAD98C9E28479FFF4BD3D9932458A6A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::.ctor(System.Void*,System.IntPtr,Unity.Jobs.JobHandle,Unity.Jobs.LowLevel.Unsafe.ScheduleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobScheduleParameters__ctor_m7BAC662AF5FA4A96429644CC676D3179A5B143F8 (JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8 * __this, void* ___i_jobData0, intptr_t ___i_reflectionData1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___i_dependency2, int32_t ___i_scheduleMode3, const RuntimeMethod* method)
{
	{
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_0 = ___i_dependency2;
		__this->set_Dependency_0(L_0);
		void* L_1 = ___i_jobData0;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_1, /*hidden argument*/NULL);
		__this->set_JobDataPtr_3((intptr_t)L_2);
		intptr_t L_3 = ___i_reflectionData1;
		__this->set_ReflectionData_2((intptr_t)L_3);
		int32_t L_4 = ___i_scheduleMode3;
		__this->set_ScheduleMode_1(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void JobScheduleParameters__ctor_m7BAC662AF5FA4A96429644CC676D3179A5B143F8_AdjustorThunk (RuntimeObject * __this, void* ___i_jobData0, intptr_t ___i_reflectionData1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___i_dependency2, int32_t ___i_scheduleMode3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8 * _thisAdjusted = reinterpret_cast<JobScheduleParameters_tA29064729507A938ACB05D9F98B2C4A6977E3EF8 *>(__this + _offset);
	JobScheduleParameters__ctor_m7BAC662AF5FA4A96429644CC676D3179A5B143F8(_thisAdjusted, ___i_jobData0, ___i_reflectionData1, ___i_dependency2, ___i_scheduleMode3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2A00D547FF8F6F8A03666B4737BB9A0620719987 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * L_0 = (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 *)il2cpp_codegen_object_new(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F825BEC75A119B6CDDA0985A3F7BA3DEA8AD5B2 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c::<.cctor>b__7_0(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m84A19BB5BB12263A1E3C52F1B351E3A24BE546C7 (U3CU3Ec_t0CD29EFB17F20C410B16682BBAC2B78C5BD98826 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, const RuntimeMethod* method)
{
	DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985  V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_tA2F349FE839781469A0344CF6039B51512394275 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 ));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E ));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D ));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 ));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D ));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B ));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 ));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_0 = ___requests0;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_mDBBEC33D93952330EED5B02B15865C59D5C355A0(L_4, /*hidden argument*/NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_8 = V_8;
		LightmapperUtils_Extract_mCBEC26CC920C0D87DF6E25417533923E26CB6DFC(L_8, (DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 *)(&V_0), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_9 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_9, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_m135DF5CF6CBECA4CBA0AC71F9CDEEF8DE25606DB((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (DirectionalLight_t64077C15074628F61CE703ED3A168AA8AB7F0AB7 *)(&V_0), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_10 = V_8;
		LightmapperUtils_Extract_mB11D8F3B35F96E176A89517A25CD1A54DCBD7D6E(L_10, (PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E *)(&V_1), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_11 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_11, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_m4E8BEBD383D5F6F1A1EDFEC763A718A7271C22A6((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (PointLight_t543DD0461FFC4EA9F3B08CF9F4BF5BB2164D167E *)(&V_1), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_12 = V_8;
		LightmapperUtils_Extract_mB1572C38F682F043180745B7A231FBE07CD205E4(L_12, (SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D *)(&V_2), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_13 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_13, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mC9948FAC4A191C99E3E7D94677B7CFD241857C86((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (SpotLight_tAE1210A6FAE3F41CA62CB63E9012C9BED625AC9D *)(&V_2), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_14 = V_8;
		LightmapperUtils_Extract_mEABF77895D51E1CA5FD380682539C3DD3FC8A91C(L_14, (RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 *)(&V_3), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_15 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_15, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mA0DF9747C6AD308EAAF2A9530B4225A3D65BB092((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (RectangleLight_t9F02AC7041621773D7676A5E2707898F24892985 *)(&V_3), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_16 = V_8;
		LightmapperUtils_Extract_m93B350DDA0CB5B624054835BAF46C177472E9212(L_16, (DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D *)(&V_4), /*hidden argument*/NULL);
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_17 = V_8;
		LightmapperUtils_Extract_mACAC5E823E243A53EDD2A01CF857DD16C3FDBE2A(L_17, (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		LightDataGI_Init_mB96C3F3E00F10DD0806BD3DB93B58C2299D59E94((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), (DiscLight_t2F3E542C8536D7FE93D943F5336DCCE844D6CB8D *)(&V_4), (Cookie_tEC43B52DA6FD8E9BFF0B54D063671606E01E039B *)(&V_5), /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_18, /*hidden argument*/NULL);
		LightDataGI_InitNoBake_mF600D612DE9A1CE4355C61317F6173E1AAEFBD57((LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)(&V_6), L_19, /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 , ((NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 *)(&___lightsOutput1))->___m_Buffer_0, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* L_24 = ___requests0;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
	{
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
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_m47823FBD9D2EE4ABA5EE8D889BBBC0783FB10A42 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m8BC0D55744A3FA2E75444AC72B3D3E4FB858BECB (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___requests0, ___lightsOutput1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, ___requests0, ___lightsOutput1);
					else
						GenericVirtActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, ___requests0, ___lightsOutput1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___requests0, ___lightsOutput1);
					else
						VirtActionInvoker1< NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___requests0, ___lightsOutput1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, targetThis, ___requests0, ___lightsOutput1);
					else
						GenericVirtActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(targetMethod, targetThis, ___requests0, ___lightsOutput1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___requests0, ___lightsOutput1);
					else
						VirtActionInvoker2< LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___requests0, ___lightsOutput1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___requests0, ___lightsOutput1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9*, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___requests0, ___lightsOutput1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::BeginInvoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RequestLightsDelegate_BeginInvoke_m75482E3D4E28205DCB4A202F5C144CB7C95622A6 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, LightU5BU5D_t1376F7CA1DDFC128499DDA9516CC40DDEE59EAC9* ___requests0, NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  ___lightsOutput1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___requests0;
	__d_args[1] = Box(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2_il2cpp_TypeInfo_var, &___lightsOutput1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_EndInvoke_mA1FF787B6F3182ACF6157D13F9A84AFCBB66EE60 (RequestLightsDelegate_t48C36AFA6015405AE4069BB1F3623AF3BC51FDA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  DelegatePInvokeWrapper_CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (DEFAULT_CALL *PInvokeFunc)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  returnValue = il2cppPInvokeFunc(___graph0, ____name1_marshaled);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m944A1B790F35F52E108EF2CC13BA02BD8DE62EB3 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  CreateOutputMethod_Invoke_mFD551E15D9A6FD8B2C70A2CC96AAD0D2D9D3D109 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, const RuntimeMethod* method)
{
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___graph0, ___name1, targetMethod);
			}
			else
			{
				// closed
				typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (void*, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graph0, ___name1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(targetMethod, targetThis, ___graph0, ___name1);
					else
						result = GenericVirtFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(targetMethod, targetThis, ___graph0, ___name1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___graph0, ___name1);
					else
						result = VirtFuncInvoker2< PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 , PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___graph0, ___name1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___graph0) - 1), ___name1, targetMethod);
				}
				else
				{
					typedef PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  (*FunctionPointerType) (void*, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A , String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___graph0, ___name1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Playables.PlayableBinding/CreateOutputMethod::BeginInvoke(UnityEngine.Playables.PlayableGraph,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CreateOutputMethod_BeginInvoke_m082AE47F9DFBF0C1787081D2D628E0E5CECCBFF1 (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A  ___graph0, String_t* ___name1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A_il2cpp_TypeInfo_var, &___graph0);
	__d_args[1] = ___name1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  CreateOutputMethod_EndInvoke_mAA7AE5BF9E6A38C081A972827A16497ACA9FA9CE (CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m66E5B9C72A27F0645F9854522ACE087CE32A5EEE (U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass12_0::<Register>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CRegisterU3Eb__0_m27C1416BAD7AF0A1BF83339C8A03865A6487B234 (U3CU3Ec__DisplayClass12_0_tC029C4F11E384EFEF6FD86B7BEC83D295D098769 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m75A8930EBA7C6BF81519358930656DAA2FBDDEDB (U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass13_0::<Unregister>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CUnregisterU3Eb__0_mBA34804D7BB1B4FFE45D077BBB07BFA81C8DCB00 (U3CU3Ec__DisplayClass13_0_t1A8EBE4E3370D09549DE4FD59077B3A7AEAD0C54 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m2B215926A23E33037D754DFAFDF8459D82243683 (U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerConnection/<>c__DisplayClass20_0::<BlockUntilRecvMsg>b__0(UnityEngine.Networking.PlayerConnection.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3CBlockUntilRecvMsgU3Eb__0_m1D6C3976419CFCE0B612D04C135A985707C215E2 (U3CU3Ec__DisplayClass20_0_tEA47E236E3FCEC75772DAF52911B35E8F14766DD * __this, MessageEventArgs_t6905F6AA12A37C5A38BBCB907E9215622364DCCA * ___args0, const RuntimeMethod* method)
{
	{
		__this->set_msgReceived_0((bool)1);
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mEB8DB2BFDA9F6F083E77F1EC1CE3F4861CD1815A (U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass6_0::<InvokeMessageIdSubscribers>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CInvokeMessageIdSubscribersU3Eb__0_mEF5D5DFC8F7C2CEC86378AC3BBD40E80A1D9C615 (U3CU3Ec__DisplayClass6_0_t96633FB6A2AE351A4A3FCDF89D10891DA07AD54F * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m97B67DA8AA306A160A790CCDD869669878DDB7F3 (U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass7_0::<AddAndCreate>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CAddAndCreateU3Eb__0_mAA3D205F35F7BE200A5DDD14099F56312FBED909 (U3CU3Ec__DisplayClass7_0_t7C625D285CBB757F88C0232D12D88EDABF06EB60 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m18AC0B2825D7BB04F59DC800DFF74D45921A28FA (U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<>c__DisplayClass8_0::<UnregisterManagedCallback>b__0(UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CUnregisterManagedCallbackU3Eb__0_m70805C4CE0F8DD258CC3975A8C90313A0A609BE3 (U3CU3Ec__DisplayClass8_0_tE64E7CAC5415DCD425D14A6062600087CC872B93 * __this, MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * L_0 = ___x0;
		NullCheck(L_0);
		Guid_t  L_1;
		L_1 = MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9(L_0, /*hidden argument*/NULL);
		Guid_t  L_2 = __this->get_messageId_0();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Guid_op_Equality_m4C2AA9C31D173525E381965A7246814B4C74D5B0(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionChangeEvent__ctor_m95EBD8B5EA1C4A14A5F2B71CEE1A2C18C73DB0A1 (ConnectionChangeEvent_tCA1C8C14171C72EC394EF45450D69C1585067BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF(__this, /*hidden argument*/UnityEvent_1__ctor_m30F443398054B5E3666B3C86E64A5C0FF97D93FF_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B(__this, /*hidden argument*/UnityEvent_1__ctor_mC7E63F58C7EFC8E8747E3619B7564A7325F03D3B_RuntimeMethod_var);
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
// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::get_MessageTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  MessageTypeSubscribers_get_MessageTypeId_m5A873C55E97728BD12BA52B5DB72FFA366992DD9 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method)
{
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = __this->get_m_messageTypeId_0();
		Guid_t  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Guid_t  L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::set_MessageTypeId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers_set_MessageTypeId_m7125FF3E71F4E678644F056A4DC5C29EFB749762 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&___value0), /*hidden argument*/NULL);
		__this->set_m_messageTypeId_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageTypeSubscribers__ctor_mA51A6D3E38DBAA5B8237BAB1688F669F24982F29 (MessageTypeSubscribers_t7A69A1D132BF9A354D94F9E490E148BBB81A508F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_subscriberCount_1(0);
		MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B * L_0 = (MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B *)il2cpp_codegen_object_new(MessageEvent_tF0C632D7EBE9C4B2B91E20F2AA4B593D1B55469B_il2cpp_TypeInfo_var);
		MessageEvent__ctor_mE4D70D8837C51E422C9A40C3F8F34ACB9AB572BB(L_0, /*hidden argument*/NULL);
		__this->set_messageCallback_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_Invoke_mB17C55B92FAECE51078028F59A9F1EAC2016B1AD (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateFunction_BeginInvoke_m1EB0935AB72A286D153ACEBD0E5D66BB38BD6799 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction_EndInvoke_mB4BC0AA40E9C83274116DF6467D72DD4902DA624 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties__ctor_mD584B5E4A07E3D025352EA0BAE9B10FE5C13A583 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::Invoke(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties_Invoke_m5B39EC5205C3910AC09DCF378EAA2D8E99391636 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___driven0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___driven0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___driven0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___driven0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___driven0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___driven0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(targetMethod, targetThis, ___driven0);
					else
						GenericVirtActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(targetMethod, targetThis, ___driven0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___driven0);
					else
						VirtActionInvoker1< RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___driven0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___driven0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___driven0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.RectTransform/ReapplyDrivenProperties::BeginInvoke(UnityEngine.RectTransform,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReapplyDrivenProperties_BeginInvoke_mC7625A8FDFF392D73C7828526490DCB88FD87232 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___driven0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___driven0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.RectTransform/ReapplyDrivenProperties::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReapplyDrivenProperties_EndInvoke_m89A593999C130CA23515BF8A9C02DDE5B39ECF67 (ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpookyHash/U::.ctor(System.UInt16*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U__ctor_m29915B03ADD0CB26085DB325B7FC87C4A5134C01 (U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB * __this, uint16_t* ___p80, const RuntimeMethod* method)
{
	{
		__this->set_p32_1((uint32_t*)((intptr_t)0));
		__this->set_p64_2((uint64_t*)((intptr_t)0));
		__this->set_i_3(((int64_t)((int64_t)0)));
		uint16_t* L_0 = ___p80;
		__this->set_p8_0((uint8_t*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void U__ctor_m29915B03ADD0CB26085DB325B7FC87C4A5134C01_AdjustorThunk (RuntimeObject * __this, uint16_t* ___p80, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB * _thisAdjusted = reinterpret_cast<U_tEA9A82EE61C5DDF7656EA5DDFCB15367A0BE3ADB *>(__this + _offset);
	U__ctor_m29915B03ADD0CB26085DB325B7FC87C4A5134C01(_thisAdjusted, ___p80, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TextAsset/EncodingUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncodingUtility__cctor_m6BADEB7670563CC438C10AF259028A7FF06AD65F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_0 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_1 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_2 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_3 = NULL;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * V_4 = NULL;
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::get_CodePage() */, L_0);
		EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 * L_2 = (EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418 *)il2cpp_codegen_object_new(EncoderReplacementFallback_t61E36A507D7FA8034B49F86DBE560EC77A6A8418_il2cpp_TypeInfo_var);
		EncoderReplacementFallback__ctor_m07299910DC3D3F6B9F8F37A4ADD40A500F97D1D4(L_2, _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C, /*hidden argument*/NULL);
		DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 * L_3 = (DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130 *)il2cpp_codegen_object_new(DecoderReplacementFallback_t8DA345EC4EF3A35A2667365F691EE69408A62130_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m7E6C273B2682E373C787568EB0BB0B2E4B6C2253(L_3, _stringLiteralB8F710F417E2D96E747683BF53A8CA9BB6B9648C, /*hidden argument*/NULL);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_4;
		L_4 = Encoding_GetEncoding_m4DC46FF0C923994EDEE21980037198E27A75E4F2(L_1, L_2, L_3, /*hidden argument*/NULL);
		((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->set_targetEncoding_1(L_4);
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_5 = (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 *)il2cpp_codegen_object_new(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var);
		UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD(L_5, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_6 = (UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 *)il2cpp_codegen_object_new(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014_il2cpp_TypeInfo_var);
		UTF32Encoding__ctor_mCC6CB31807AE3B57FAF941B59D72D7BA10CFB1FD(L_6, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_1 = L_6;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_7 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C(L_7, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_2 = L_7;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_8 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_m8D0BFF0DBB175D7E590674E31343E8C72701FC7C(L_8, (bool)0, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_3 = L_8;
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_9 = (UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 *)il2cpp_codegen_object_new(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_mD752778085A353529AF03841383E5603FE556449(L_9, (bool)1, (bool)1, /*hidden argument*/NULL);
		V_4 = L_9;
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_10 = (KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7*)(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7*)SZArrayNew(KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7_il2cpp_TypeInfo_var, (uint32_t)5);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_11 = L_10;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_12);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_14 = V_0;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_15), L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_15);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_16 = L_11;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_17);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_19 = V_1;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_20), L_18, L_19, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_20);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_21 = L_16;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_22 = V_2;
		NullCheck(L_22);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_22);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_24 = V_2;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_25;
		memset((&L_25), 0, sizeof(L_25));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_25), L_23, L_24, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_25);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_26 = L_21;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_27);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_29 = V_3;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_30;
		memset((&L_30), 0, sizeof(L_30));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_30), L_28, L_29, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_30);
		KeyValuePair_2U5BU5D_t256F162571C05521448AA203E8C620697614CAE7* L_31 = L_26;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_32 = V_4;
		NullCheck(L_32);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Byte[] System.Text.Encoding::GetPreamble() */, L_32);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_34 = V_4;
		KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B  L_35;
		memset((&L_35), 0, sizeof(L_35));
		KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E((&L_35), L_33, L_34, /*hidden argument*/KeyValuePair_2__ctor_mDCF2A49BD99EBDA9819EAB356D5E65CA66F8754E_RuntimeMethod_var);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (KeyValuePair_2_t3A7CB634D4B37FBC5AD1F3511F36FC672A31B11B )L_35);
		((EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_StaticFields*)il2cpp_codegen_static_fields_for(EncodingUtility_tF25232B383AA56BB15E7955C1C9FC356F9770983_il2cpp_TypeInfo_var))->set_encodingLookup_0(L_31);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m052C22273F1D789E58A09606D5EE5E87ABC2C91B (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___outer0;
		__this->set_outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1CFECBB7AC3EACD05A11CC6848AE7A94A8123E9F (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_outer_0();
		int32_t L_1 = __this->get_currentIndex_1();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m346F9A121D9E89ADBA8296E6A7EF8763C5B58A14 (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_outer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int32_t L_3 = V_1;
		__this->set_currentIndex_1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0024;
	}

IL_0024:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Transform/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mFA289646E280C94D82CC223C024E0B615F811C8E (Enumerator_t8A0B2200373BC9628C065322A1BA07AAA47E0259 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
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
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_back(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_pinvoke_cleanup(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com_back(const WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled, WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
IL2CPP_EXTERN_C void WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshal_com_cleanup(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_0 = ___callback0;
		__this->set_m_DelagateCallback_0(L_0);
		RuntimeObject * L_1 = ___state1;
		__this->set_m_DelagateState_1(L_1);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = ___waitHandle2;
		__this->set_m_WaitHandle_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603_AdjustorThunk (RuntimeObject * __this, SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___waitHandle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * _thisAdjusted = reinterpret_cast<WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *>(__this + _offset);
	WorkRequest__ctor_m13C7B4A89E47F4B97ED9B786DB99849DBC2B5603(_thisAdjusted, ___callback0, ___state1, ___waitHandle2, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20 (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * __this, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_0 = __this->get_m_DelagateCallback_0();
		RuntimeObject * L_1 = __this->get_m_DelagateState_1();
		NullCheck(L_0);
		SendOrPostCallback_Invoke_m352534ED0E61440A793944CC44809F666BBC1461(L_0, L_1, /*hidden argument*/NULL);
		goto IL_0023;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(L_2, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0023;
	} // end catch (depth: 1)

IL_0023:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_3 = __this->get_m_WaitHandle_2();
		V_1 = (bool)((!(((RuntimeObject*)(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_m_WaitHandle_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 * _thisAdjusted = reinterpret_cast<WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 *>(__this + _offset);
	WorkRequest_Invoke_m1C292B7297918C5F2DBE70971895FE8D5C33AA20(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_x_m58F3B1895453A0A4BC964CA331D56B7C3D873B7C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_X_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int_set_y_m55A40AE7AF833E31D968E0C515A5C773F251C21A_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Y_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m7EB52A67AE3584E8A1E8CAC550708DF13520F529_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, ((*(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)UnBox(L_2, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mD19905B093915BA12852732EA27AA2DBE030D11F_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_mFBD4702FB2F35452191EC918B9B09766A5761854_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___vector0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___vector0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___vector0;
		float L_11 = L_10.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))))));
		V_0 = ((float)((float)L_12));
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Int__ctor_m3785ECE3685842F2B477CBE64334D6969EB503DF_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		int32_t L_2 = ___z2;
		__this->set_m_Z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_0 = (*(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_1 = ___other0;
		bool L_2;
		L_2 = Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE2CEEF2FE79B510472A930F80DDB56E23B39CC11_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___other0;
		bool L_3;
		L_3 = Vector3Int_Equals_m8BE683205BACD053B7EB560AB5B7EDE78B779C5F_inline((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)__this, ((*(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)UnBox(L_2, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_m724847B7E7A484A1E6F598CEC2D77CDE8ECE49E7_inline (Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___lhs0, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m5B1B86414F43D7CE0C83932F0094B1A94A9B4594((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m62E0B990FBFDA9D416B82000A73B5B4F71CF0FA3((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m14EC2E331A510D161E5A7A587837BBD2A3D225B6((Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA *)(&___rhs1), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m0919D35807550372D1748193EB31E4C5E406AE61_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___other0;
		float L_2 = L_1.get_x_1();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___other0;
		float L_5 = L_4.get_y_2();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7 = ___other0;
		float L_8 = L_7.get_z_3();
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___other0;
		float L_11 = L_10.get_w_4();
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Division_m8AF7C92DD640CE3275F975E9BCD62F04E29DEDB6_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___a0;
		float L_1 = L_0.get_x_1();
		float L_2 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___a0;
		float L_4 = L_3.get_y_2();
		float L_5 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___a0;
		float L_7 = L_6.get_z_3();
		float L_8 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = ___a0;
		float L_10 = L_9.get_w_4();
		float L_11 = ___d1;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_12), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), ((float)((float)L_10/(float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___lhs0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___rhs1;
		float L_3 = L_2.get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___lhs0;
		float L_5 = L_4.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___rhs1;
		float L_7 = L_6.get_y_2();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___lhs0;
		float L_9 = L_8.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___rhs1;
		float L_11 = L_10.get_z_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___lhs0;
		float L_13 = L_12.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___rhs1;
		float L_15 = L_14.get_w_4();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m04ED4EACCB01E49DEC7E0E5A83789068A3525BC2_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CwaitTimeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  List_1_get_Item_m1B6B81DB103CAEB8599A76116E4B3E6DB2756979_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F* L_2 = (WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F*)__this->get__items_1();
		int32_t L_3 = ___index0;
		WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((WorkRequestU5BU5D_tFD014E941739D5AFA0353EDFE7D9CD61E8A43A3F*)L_2, (int32_t)L_3);
		return (WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB8B85465C2537289C6F7DA4FAA8B5C91FD32AB02_gshared_inline (List_1_t4EDF55145AC9CAFF3FF238C94A18EEDCA9FFAFFA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
