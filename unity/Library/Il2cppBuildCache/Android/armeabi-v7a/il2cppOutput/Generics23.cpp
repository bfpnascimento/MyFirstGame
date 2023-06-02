#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.Comparer`1<System.Single>
struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<System.Int32,System.Int64>
struct Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0;
// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123;
// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.Vector2,System.Boolean>
struct Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A;
// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148;
// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1;
// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Boolean>
struct Func_2_tF48C6561BC5090026A3B249255BE66032A633363;
// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901;
// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F;
// System.Func`2<Unity.Barracuda.Model/Input,System.Boolean>
struct Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C;
// System.Func`2<Unity.Barracuda.Model/Input,System.Int32>
struct Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E;
// System.Func`2<Unity.Barracuda.Model/Input,System.Object>
struct Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779;
// System.Func`2<Unity.Barracuda.Model/Memory,System.Boolean>
struct Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A;
// System.Func`2<Unity.Barracuda.Model/Memory,System.Int32>
struct Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69;
// System.Func`2<Unity.Barracuda.Model/Memory,System.Object>
struct Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>
struct IEnumerable_1_tC141A8335526641BEA65081566FA3A11E667F83A;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_tBA0E6E878DA8F8DD29D887670962BCC85E2FCB3E;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_tF9FFC7B635421ED6396ABF58E4F5831F13B2C61F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t47E725A87E8DA38B74327401954A54493CC3251E;
// System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Layer/DataSet>
struct IEnumerable_1_tC063CF093A43E4727FB7B8E30355334005A71C8A;
// System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Input>
struct IEnumerable_1_t1F70AD6A33808E46A15E4DE6152177FC66272123;
// System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Memory>
struct IEnumerable_1_tE96560B7012ECDA249F295E8F5DD71D5360A0B2C;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>
struct IEnumerator_1_tB7D12F25E433EAD4509A49D8C2F8435C9D9BC04E;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_tAA2BE9F7B57F3BA20E480FBFDAC12A6CFDB0D296;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_tE27018507FAEDD46DFF02203E407053F3F338BEA;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t01C92EC1202D8B9EF499D5B3D2B22925D411381B;
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Layer/DataSet>
struct IEnumerator_1_t8208F8F08D4FE7E71E9D35C9B1ED2B18253280DE;
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Input>
struct IEnumerator_1_t24A2D0279DA3C2F447353FB7F84A552A0337E005;
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Memory>
struct IEnumerator_1_t01B42911B5D8A3587C3556139F036D7D5C8355F3;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>
struct Iterator_1_t55BB654766384A6772127C44074D90C5256518A1;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379;
// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>
struct Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Collections.Generic.List`1<Unity.Barracuda.Layer/DataSet>
struct List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351;
// System.Collections.Generic.List`1<Unity.Barracuda.Model/Input>
struct List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A;
// System.Collections.Generic.List`1<Unity.Barracuda.Model/Memory>
struct List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>
struct ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>
struct ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>
struct ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>
struct ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>
struct WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>
struct WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>
struct WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>
struct WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>
struct WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>
struct WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>
struct WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>
struct WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// Unity.Barracuda.Layer/DataSet[]
struct DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93;
// Unity.Barracuda.Model/Input[]
struct InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D;
// Unity.Barracuda.Model/Memory[]
struct MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
struct DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93;
struct InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D;
struct MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Single>
struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int64>
struct Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int64_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE, ___current_2)); }
	inline int64_t get_current_2() const { return ___current_2; }
	inline int64_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int64_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Barracuda.Layer/DataSet>
struct List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351, ____items_1)); }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* get__items_1() const { return ____items_1; }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351_StaticFields, ____emptyArray_5)); }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Barracuda.Model/Input>
struct List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A, ____items_1)); }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* get__items_1() const { return ____items_1; }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A_StaticFields, ____emptyArray_5)); }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Barracuda.Model/Memory>
struct List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A, ____items_1)); }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* get__items_1() const { return ____items_1; }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A_StaticFields, ____emptyArray_5)); }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>
struct ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F 
{
public:
	// T1 System.ValueTuple`4::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	float ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	float ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	RuntimeObject * ___Item4_3;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F, ___Item2_1)); }
	inline float get_Item2_1() const { return ___Item2_1; }
	inline float* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(float value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F, ___Item3_2)); }
	inline float get_Item3_2() const { return ___Item3_2; }
	inline float* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(float value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>
struct WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___predicate_4)); }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88, ___selector_5)); }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>
struct WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>
struct WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2, ___selector_5)); }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>
struct WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>
struct WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080, ___source_3)); }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* get_source_3() const { return ___source_3; }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080, ___selector_5)); }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0, ___source_3)); }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* get_source_3() const { return ___source_3; }
	inline DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0, ___selector_5)); }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * get_selector_5() const { return ___selector_5; }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF, ___source_3)); }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* get_source_3() const { return ___source_3; }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF, ___selector_5)); }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2, ___source_3)); }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* get_source_3() const { return ___source_3; }
	inline InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2, ___selector_5)); }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463, ___source_3)); }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* get_source_3() const { return ___source_3; }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463, ___selector_5)); }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0, ___source_3)); }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* get_source_3() const { return ___source_3; }
	inline MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0, ___selector_5)); }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F, ___selector_5)); }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>
struct WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED, ___selector_5)); }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>
struct WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>
struct WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53, ___selector_5)); }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1, ___selector_5)); }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * get_selector_5() const { return ___selector_5; }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587, ___selector_5)); }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798, ___selector_5)); }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84, ___selector_5)); }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6, ___selector_5)); }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
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


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
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


// Unity.Barracuda.TensorShape
struct TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1 
{
public:
	// System.Int32 Unity.Barracuda.TensorShape::batch
	int32_t ___batch_0;
	// System.Int32 Unity.Barracuda.TensorShape::height
	int32_t ___height_1;
	// System.Int32 Unity.Barracuda.TensorShape::width
	int32_t ___width_2;
	// System.Int32 Unity.Barracuda.TensorShape::channels
	int32_t ___channels_3;

public:
	inline static int32_t get_offset_of_batch_0() { return static_cast<int32_t>(offsetof(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1, ___batch_0)); }
	inline int32_t get_batch_0() const { return ___batch_0; }
	inline int32_t* get_address_of_batch_0() { return &___batch_0; }
	inline void set_batch_0(int32_t value)
	{
		___batch_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_channels_3() { return static_cast<int32_t>(offsetof(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1, ___channels_3)); }
	inline int32_t get_channels_3() const { return ___channels_3; }
	inline int32_t* get_address_of_channels_3() { return &___channels_3; }
	inline void set_channels_3(int32_t value)
	{
		___channels_3 = value;
	}
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


// Unity.Barracuda.Model/Input
struct Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 
{
public:
	// System.String Unity.Barracuda.Model/Input::name
	String_t* ___name_0;
	// System.Int32[] Unity.Barracuda.Model/Input::shape
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___shape_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0, ___shape_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_shape_1() const { return ___shape_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___shape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Model/Input
struct Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0_marshaled_pinvoke
{
	char* ___name_0;
	Il2CppSafeArray/*NONE*/* ___shape_1;
};
// Native definition for COM marshalling of Unity.Barracuda.Model/Input
struct Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppSafeArray/*NONE*/* ___shape_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
struct Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___list_0)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_list_0() const { return ___list_0; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781, ___current_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_current_3() const { return ___current_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Input>
struct Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A, ___list_0)); }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * get_list_0() const { return ___list_0; }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A, ___current_3)); }
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  get_current_3() const { return ___current_3; }
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___shape_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___current_2)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>
struct Iterator_1_t55BB654766384A6772127C44074D90C5256518A1  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t55BB654766384A6772127C44074D90C5256518A1, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t55BB654766384A6772127C44074D90C5256518A1, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t55BB654766384A6772127C44074D90C5256518A1, ___current_2)); }
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  get_current_2() const { return ___current_2; }
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->____value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>
struct Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF, ___current_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_current_2() const { return ___current_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___selector_5)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>
struct WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24, ___selector_5)); }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>
struct WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___selector_5)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get_selector_5() const { return ___selector_5; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>
struct WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323  : public Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___selector_5)); }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
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


// Unity.Barracuda.Layer/DataSet
struct DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 
{
public:
	// System.String Unity.Barracuda.Layer/DataSet::name
	String_t* ___name_0;
	// Unity.Barracuda.TensorShape Unity.Barracuda.Layer/DataSet::shape
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_1;
	// System.Int64 Unity.Barracuda.Layer/DataSet::offset
	int64_t ___offset_2;
	// System.Int32 Unity.Barracuda.Layer/DataSet::itemSizeInBytes
	int32_t ___itemSizeInBytes_3;
	// System.Int32 Unity.Barracuda.Layer/DataSet::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5, ___shape_1)); }
	inline TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  get_shape_1() const { return ___shape_1; }
	inline TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1 * get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  value)
	{
		___shape_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5, ___offset_2)); }
	inline int64_t get_offset_2() const { return ___offset_2; }
	inline int64_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int64_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_itemSizeInBytes_3() { return static_cast<int32_t>(offsetof(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5, ___itemSizeInBytes_3)); }
	inline int32_t get_itemSizeInBytes_3() const { return ___itemSizeInBytes_3; }
	inline int32_t* get_address_of_itemSizeInBytes_3() { return &___itemSizeInBytes_3; }
	inline void set_itemSizeInBytes_3(int32_t value)
	{
		___itemSizeInBytes_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Layer/DataSet
struct DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5_marshaled_pinvoke
{
	char* ___name_0;
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_1;
	int64_t ___offset_2;
	int32_t ___itemSizeInBytes_3;
	int32_t ___length_4;
};
// Native definition for COM marshalling of Unity.Barracuda.Layer/DataSet
struct DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5_marshaled_com
{
	Il2CppChar* ___name_0;
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_1;
	int64_t ___offset_2;
	int32_t ___itemSizeInBytes_3;
	int32_t ___length_4;
};

// Unity.Barracuda.Model/Memory
struct Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E 
{
public:
	// Unity.Barracuda.TensorShape Unity.Barracuda.Model/Memory::shape
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_0;
	// System.String Unity.Barracuda.Model/Memory::input
	String_t* ___input_1;
	// System.String Unity.Barracuda.Model/Memory::output
	String_t* ___output_2;

public:
	inline static int32_t get_offset_of_shape_0() { return static_cast<int32_t>(offsetof(Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E, ___shape_0)); }
	inline TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  get_shape_0() const { return ___shape_0; }
	inline TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1 * get_address_of_shape_0() { return &___shape_0; }
	inline void set_shape_0(TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  value)
	{
		___shape_0 = value;
	}

	inline static int32_t get_offset_of_input_1() { return static_cast<int32_t>(offsetof(Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E, ___input_1)); }
	inline String_t* get_input_1() const { return ___input_1; }
	inline String_t** get_address_of_input_1() { return &___input_1; }
	inline void set_input_1(String_t* value)
	{
		___input_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_1), (void*)value);
	}

	inline static int32_t get_offset_of_output_2() { return static_cast<int32_t>(offsetof(Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E, ___output_2)); }
	inline String_t* get_output_2() const { return ___output_2; }
	inline String_t** get_address_of_output_2() { return &___output_2; }
	inline void set_output_2(String_t* value)
	{
		___output_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Model/Memory
struct Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E_marshaled_pinvoke
{
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_0;
	char* ___input_1;
	char* ___output_2;
};
// Native definition for COM marshalling of Unity.Barracuda.Model/Memory
struct Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E_marshaled_com
{
	TensorShape_tEB1E540282BBCEDD6D18077B9D57874BB7EF1DF1  ___shape_0;
	Il2CppChar* ___input_1;
	Il2CppChar* ___output_2;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Layer/DataSet>
struct Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C, ___list_0)); }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * get_list_0() const { return ___list_0; }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C, ___current_3)); }
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  get_current_3() const { return ___current_3; }
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___name_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Memory>
struct Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51, ___list_0)); }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * get_list_0() const { return ___list_0; }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51, ___current_3)); }
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  get_current_3() const { return ___current_3; }
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___input_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___output_2), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>
struct WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A  : public Iterator_1_t55BB654766384A6772127C44074D90C5256518A1
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>
struct WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C  : public Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C, ___predicate_4)); }
	inline Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___enumerator_5)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA  : public Iterator_1_t55BB654766384A6772127C44074D90C5256518A1
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA, ___selector_5)); }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A  : public Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A, ___source_3)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_source_3() const { return ___source_3; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A, ___selector_5)); }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C  : public Iterator_1_t55BB654766384A6772127C44074D90C5256518A1
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C, ___selector_5)); }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC  : public Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC, ___selector_5)); }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966  : public Iterator_1_t55BB654766384A6772127C44074D90C5256518A1
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966, ___selector_5)); }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238, ___selector_5)); }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C  : public Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C, ___source_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_source_3() const { return ___source_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C, ___predicate_4)); }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C, ___selector_5)); }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C, ___enumerator_6)); }
	inline Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>
struct WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2, ___source_3)); }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * get_source_3() const { return ___source_3; }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2, ___selector_5)); }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * get_selector_5() const { return ___selector_5; }
	inline Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2, ___enumerator_6)); }
	inline Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___name_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___shape_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>
struct WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A, ___source_3)); }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * get_source_3() const { return ___source_3; }
	inline List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A, ___predicate_4)); }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A, ___selector_5)); }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A, ___enumerator_6)); }
	inline Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___name_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___shape_1), (void*)NULL);
		#endif
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>
struct Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>
struct Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Int64>
struct Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int64,System.Boolean>
struct Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Int64>
struct Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector2,System.Boolean>
struct Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector4,System.Boolean>
struct Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.Vector4,UnityEngine.Vector2>
struct Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Boolean>
struct Func_2_tF48C6561BC5090026A3B249255BE66032A633363  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Input,System.Boolean>
struct Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Input,System.Int32>
struct Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Input,System.Object>
struct Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Memory,System.Boolean>
struct Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Memory,System.Int32>
struct Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.Barracuda.Model/Memory,System.Object>
struct Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53  : public MulticastDelegate_t
{
public:

public:
};


// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>
struct ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC  : public MulticastDelegate_t
{
public:

public:
};


// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>
struct ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39  : public MulticastDelegate_t
{
public:

public:
};


// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>
struct ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23  : public MulticastDelegate_t
{
public:

public:
};


// Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>
struct ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>
struct WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B, ___source_3)); }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * get_source_3() const { return ___source_3; }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B, ___selector_5)); }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B, ___enumerator_6)); }
	inline Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___name_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>
struct WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7, ___source_3)); }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * get_source_3() const { return ___source_3; }
	inline List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7, ___predicate_4)); }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tF48C6561BC5090026A3B249255BE66032A633363 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7, ___selector_5)); }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * get_selector_5() const { return ___selector_5; }
	inline Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7, ___enumerator_6)); }
	inline Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___name_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>
struct WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4  : public Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4, ___source_3)); }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * get_source_3() const { return ___source_3; }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4, ___selector_5)); }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4, ___enumerator_6)); }
	inline Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___input_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___output_2), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>
struct WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA, ___source_3)); }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * get_source_3() const { return ___source_3; }
	inline List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA, ___predicate_4)); }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA, ___selector_5)); }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA, ___enumerator_6)); }
	inline Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___input_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___output_2), (void*)NULL);
		#endif
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		m_Items[index] = value;
	}
};
// Unity.Barracuda.Layer/DataSet[]
struct DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  m_Items[1];

public:
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
};
// Unity.Barracuda.Model/Input[]
struct InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  m_Items[1];

public:
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___shape_1), (void*)NULL);
		#endif
	}
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___shape_1), (void*)NULL);
		#endif
	}
};
// Unity.Barracuda.Model/Memory[]
struct MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  m_Items[1];

public:
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___input_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___output_2), (void*)NULL);
		#endif
	}
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___input_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___output_2), (void*)NULL);
		#endif
	}
};


// System.Void System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___item10, float ___item21, float ___item32, RuntimeObject * ___item43, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C_gshared (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Layer/DataSet>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_gshared_inline (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Layer/DataSet>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2405931F447489188E5350DACBC0A3B40B5EEB49_gshared (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Input>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_gshared_inline (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Input>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE7761C9327156038FBF466EC2A54625E6B871D25_gshared (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Memory>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_gshared_inline (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Memory>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB2B075B324890183058DB1A19D8A0D282C164180_gshared (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___item10, float ___item21, float ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject *, float, float, RuntimeObject *, const RuntimeMethod*))ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
inline bool ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F , const RuntimeMethod*))ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.Object)
inline bool ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject *, const RuntimeMethod*))ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
inline int32_t ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F , const RuntimeMethod*))ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject *, const RuntimeMethod*))ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCode()
inline int32_t ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, const RuntimeMethod*))ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8_gshared)(__this, ___comparer0, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::ToString()
inline String_t* ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289 (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *, const RuntimeMethod*))ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::get_Current()
inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	return ((  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  (*) (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *, const RuntimeMethod*))Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>::MoveNext()
inline bool Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *, const RuntimeMethod*))Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Layer/DataSet>::get_Current()
inline DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_inline (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * __this, const RuntimeMethod* method)
{
	return ((  DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  (*) (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *, const RuntimeMethod*))Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Layer/DataSet>::MoveNext()
inline bool Enumerator_MoveNext_m2405931F447489188E5350DACBC0A3B40B5EEB49 (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *, const RuntimeMethod*))Enumerator_MoveNext_m2405931F447489188E5350DACBC0A3B40B5EEB49_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Input>::get_Current()
inline Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_inline (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * __this, const RuntimeMethod* method)
{
	return ((  Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  (*) (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *, const RuntimeMethod*))Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Input>::MoveNext()
inline bool Enumerator_MoveNext_mE7761C9327156038FBF466EC2A54625E6B871D25 (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *, const RuntimeMethod*))Enumerator_MoveNext_mE7761C9327156038FBF466EC2A54625E6B871D25_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Memory>::get_Current()
inline Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_inline (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * __this, const RuntimeMethod* method)
{
	return ((  Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  (*) (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *, const RuntimeMethod*))Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.Model/Memory>::MoveNext()
inline bool Enumerator_MoveNext_mB2B075B324890183058DB1A19D8A0D282C164180 (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *, const RuntimeMethod*))Enumerator_MoveNext_mB2B075B324890183058DB1A19D8A0D282C164180_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___item10, float ___item21, float ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		float L_1 = ___item21;
		__this->set_Item2_1(L_1);
		float L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, float ___item21, float ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	ValueTuple_4__ctor_m7CDC1DDC6B4B407EC586DCD60F07F62071926789(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)__this, (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )((*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_m63560C27FEE77CBFAE3079078C52DD6CA681C0F9(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_5;
		L_5 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		float L_6 = (float)__this->get_Item2_1();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_7 = ___other0;
		float L_8 = (float)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_5, (float)L_6, (float)L_8);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_10;
		L_10 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		float L_11 = (float)__this->get_Item3_2();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_12 = ___other0;
		float L_13 = (float)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(T,T) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_10, (float)L_11, (float)L_13);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		return (bool)L_19;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2_AdjustorThunk (RuntimeObject * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_m2A19B73BEF59C637C0B78C08937325C48C5BD5B2(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )((*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		float L_9 = (float)__this->get_Item2_1();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15), &L_10);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_12 = V_0;
		float L_13 = (float)L_12.get_Item2_1();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_17 = ___comparer1;
		float L_18 = (float)__this->get_Item3_2();
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16), &L_19);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_21 = V_0;
		float L_22 = (float)L_21.get_Item3_2();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16), &L_23);
		NullCheck((RuntimeObject*)L_17);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_26 = ___comparer1;
		RuntimeObject * L_27 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_28 = V_0;
		RuntimeObject * L_29 = (RuntimeObject *)L_28.get_Item4_3();
		NullCheck((RuntimeObject*)L_26);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (RuntimeObject *)L_27, (RuntimeObject *)L_29);
		return (bool)L_30;
	}

IL_008b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m7AC4EF9C337CDF8F992474D2EB1669E4EE26253B(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_2 = (*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)__this);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_3 = (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)__this, (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )((*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_IComparable_CompareTo_m893D82897A05CFFD9DEFEFD580D4A7DA3DC56B8B(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * L_7;
		L_7 = ((  Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		float L_8 = (float)__this->get_Item2_1();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_9 = ___other0;
		float L_10 = (float)L_9.get_Item2_1();
		NullCheck((Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_7, (float)L_8, (float)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * L_14;
		L_14 = ((  Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		float L_15 = (float)__this->get_Item3_2();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_16 = ___other0;
		float L_17 = (float)L_16.get_Item3_2();
		NullCheck((Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, float, float >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Single>::Compare(T,T) */, (Comparer_1_tA1074A33ECE2F467A97020AE25F9A5CFBEB7EACD *)L_14, (float)L_15, (float)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646_AdjustorThunk (RuntimeObject * __this, ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_CompareTo_m8D5B1B88A9153FB00C62DD0B6B3CB39733F53646(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_2 = (*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)__this);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_3 = (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F )((*(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		float L_18 = (float)__this->get_Item2_1();
		float L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15), &L_19);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_21 = V_0;
		float L_22 = (float)L_21.get_Item2_1();
		float L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15), &L_23);
		NullCheck((RuntimeObject*)L_17);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		V_1 = (int32_t)L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_27 = V_1;
		return (int32_t)L_27;
	}

IL_0082:
	{
		RuntimeObject* L_28 = ___comparer1;
		float L_29 = (float)__this->get_Item3_2();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16), &L_30);
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_32 = V_0;
		float L_33 = (float)L_32.get_Item3_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16), &L_34);
		NullCheck((RuntimeObject*)L_28);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_31, (RuntimeObject *)L_35);
		V_1 = (int32_t)L_36;
		int32_t L_37 = V_1;
		if (!L_37)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_38 = V_1;
		return (int32_t)L_38;
	}

IL_00a4:
	{
		RuntimeObject* L_39 = ___comparer1;
		RuntimeObject * L_40 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F  L_41 = V_0;
		RuntimeObject * L_42 = (RuntimeObject *)L_41.get_Item4_3();
		NullCheck((RuntimeObject*)L_39);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_39, (RuntimeObject *)L_40, (RuntimeObject *)L_42);
		return (int32_t)L_43;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mA0176FF12E25E2D962A9C4E2A8FB7B5075F5FA0C(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RuntimeObject * V_3 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	float* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	float* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	float* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	float* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	float* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	float* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		float* L_5 = (float*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		float L_7 = (*(float*)G_B5_0);
		V_1 = (float)L_7;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		float* L_10 = (float*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		G_B11_0 = L_10;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		float L_12 = (*(float*)G_B9_0);
		V_2 = (float)L_12;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		goto IL_0094;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		int32_t L_14;
		L_14 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)(float*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047((int32_t)G_B16_3, (int32_t)G_B16_2, (int32_t)G_B16_1, (int32_t)G_B16_0, /*hidden argument*/NULL);
		return (int32_t)L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCode_mBD7C6230D33D9089EB0EEC4AD77B13DE79A50A77(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73((ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)(ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m2E7A182E67446C1CAFB58D046711D71CD77DADA8(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		float L_4 = (float)__this->get_Item2_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 15), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		RuntimeObject* L_8 = ___comparer0;
		float L_9 = (float)__this->get_Item3_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 16), &L_10);
		NullCheck((RuntimeObject*)L_8);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11);
		RuntimeObject* L_13 = ___comparer0;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14);
		int32_t L_16;
		L_16 = ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047((int32_t)L_2, (int32_t)L_7, (int32_t)L_12, (int32_t)L_15, /*hidden argument*/NULL);
		return (int32_t)L_16;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCodeCore_mCDAF17845E255B970E715135979F8536EC2A0A73(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`4<System.Object,System.Single,System.Single,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289_gshared (ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	RuntimeObject * V_3 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	float* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	float* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	float* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	float* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	float* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	float* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		float* L_10 = (float*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(float));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007b;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		float L_12 = (*(float*)G_B5_0);
		V_1 = (float)L_12;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007b;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		float* L_17 = (float*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(float));
		G_B11_0 = L_17;
		G_B11_1 = 5;
		G_B11_2 = L_16;
		G_B11_3 = L_16;
		goto IL_00bb;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
	}
	{
		float L_19 = (*(float*)G_B9_0);
		V_2 = (float)L_19;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00bb;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		String_t* L_21;
		L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(float*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_30;
		L_30 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29, /*hidden argument*/NULL);
		return (String_t*)L_30;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F * _thisAdjusted = reinterpret_cast<ValueTuple_4_t74E22AC7E5523337F472ECEF0E8A3E03930BB01F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_4_ToString_m149C7A2828A0276585A56B6BFBFDF83070737289(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuesMerger__ctor_m4BD4BB035CAAD88D85B918A28997383C311724A4_gshared (ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>::Invoke(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_Invoke_m13740E26D4C3A419CF6E15BCA6B6EA884656A161_gshared (ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC * __this, bool* ___value0, bool ___other1, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (bool*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___value0, ___other1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, bool*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< bool, bool*, bool >::Invoke(targetMethod, targetThis, ___value0, ___other1);
					else
						result = GenericVirtFuncInvoker2< bool, bool*, bool >::Invoke(targetMethod, targetThis, ___value0, ___other1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, bool*, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___other1);
					else
						result = VirtFuncInvoker2< bool, bool*, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___other1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, bool*, bool, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>::BeginInvoke(T&,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValuesMerger_BeginInvoke_m2B47F5F2107F65A34F0890C9E56491112EA615B2_gshared (ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC * __this, bool* ___value0, bool ___other1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &*___value0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___other1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Boolean>::EndInvoke(T&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_EndInvoke_mE561FE018FA7804C04C76ACA55EE82EC9DFD9EC3_gshared (ValuesMerger_t93B39FC66DF1375AD49F7234F0B6C46A045054DC * __this, bool* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___value0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuesMerger__ctor_m7ABF0D1C2D1B05ABC9A6D32390A5923A85513EB5_gshared (ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>::Invoke(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_Invoke_mAE8EFFF132417849FC8BB59E18B209421BB6FE3A_gshared (ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39 * __this, int32_t* ___value0, int32_t ___other1, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (int32_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___value0, ___other1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< bool, int32_t*, int32_t >::Invoke(targetMethod, targetThis, ___value0, ___other1);
					else
						result = GenericVirtFuncInvoker2< bool, int32_t*, int32_t >::Invoke(targetMethod, targetThis, ___value0, ___other1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, int32_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___other1);
					else
						result = VirtFuncInvoker2< bool, int32_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___other1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, int32_t*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>::BeginInvoke(T&,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValuesMerger_BeginInvoke_m282CF6310915173D0456AB9E34A573DAAD2976C0_gshared (ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39 * __this, int32_t* ___value0, int32_t ___other1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___value0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___other1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Int32>::EndInvoke(T&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_EndInvoke_mC71C1ED72E63BC3A168316E1E03A4D2B06D94247_gshared (ValuesMerger_tF8AD52967296C1B8AED91A883D28B63388A26D39 * __this, int32_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___value0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuesMerger__ctor_mE307F0C3339F9CBD8164248C42CE1C96AF2C99A2_gshared (ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>::Invoke(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_Invoke_mF702E3CAF451A97AFCDC862F2135A064AC2CB15A_gshared (ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23 * __this, RuntimeObject ** ___value0, RuntimeObject * ___other1, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___value0, ___other1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< bool, RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___value0, ___other1);
					else
						result = GenericVirtFuncInvoker2< bool, RuntimeObject **, RuntimeObject * >::Invoke(targetMethod, targetThis, ___value0, ___other1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___other1);
					else
						result = VirtFuncInvoker2< bool, RuntimeObject **, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___other1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___value0, ___other1, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RuntimeObject **, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>::BeginInvoke(T&,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValuesMerger_BeginInvoke_mE0F8F0AD7B9F6C1D120E43F6B0B58EEB07296F9E_gshared (ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23 * __this, RuntimeObject ** ___value0, RuntimeObject * ___other1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = *___value0;
	__d_args[1] = ___other1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Object>::EndInvoke(T&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_EndInvoke_mDC0753C4EA5F509C28B8668DD8CE47A89881749F_gshared (ValuesMerger_t837D1454BD4AC6ED2AA6C484356BAE324989EE23 * __this, RuntimeObject ** ___value0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___value0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuesMerger__ctor_m5E8CADCAAA187D02B8265FDB5334D0A7B8FA9A57_gshared (ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>::Invoke(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_Invoke_mEFC357620BE0A199F225668C05DD0C7116A30BED_gshared (ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80 * __this, float* ___value0, float ___other1, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (float*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___value0, ___other1, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, float*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< bool, float*, float >::Invoke(targetMethod, targetThis, ___value0, ___other1);
					else
						result = GenericVirtFuncInvoker2< bool, float*, float >::Invoke(targetMethod, targetThis, ___value0, ___other1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< bool, float*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___value0, ___other1);
					else
						result = VirtFuncInvoker2< bool, float*, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___value0, ___other1);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, float*, float, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___value0, ___other1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>::BeginInvoke(T&,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValuesMerger_BeginInvoke_m8FD72DDAE5A5ACB26D74D57FB495D6925953C537_gshared (ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80 * __this, float* ___value0, float ___other1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &*___value0);
	__d_args[1] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___other1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Boolean Google.Protobuf.FieldCodec`1/ValuesMerger<System.Single>::EndInvoke(T&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValuesMerger_EndInvoke_mDB9A055076D0F325BCAF762F29FDFB7DA42966A2_gshared (ValuesMerger_tFBD37AFF50D2B9DE9BEAD1E1568F4416ACFE4D80 * __this, float* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___value0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFA68796C995A71918347DA98D160E26649D6A1FC_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereArrayIterator_1_Clone_mD021B473127C1F6F14F3A65B5532C1680C976944_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_2 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m863DA6E4F0A213B340E29BED24B21CCF8CF3A8CA_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_7 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_0;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_11 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mBDA5AE3243C59C98DC1F78407A7C6B939F0ED8E7_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_4 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m707C14212113530906675226212BFB17FB9FFDAD_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereEnumerableIterator_1_Clone_m784C946DD2F2922C39D9D7F0FE127F9B3F6459B3_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_2 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mE16D9D538B2554CA7720C9950DED49B47FDCD080_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m63AA91504371EFC63212838247EC0751DEB04725_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mBC8A7812EA44E454BCB18F3920133BFD5EF67FA6_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_4 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m3A9A2DEB684CBFA5219E0B71687A0082C2FF625E_gshared (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * __this, RuntimeObject* ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 * WhereEnumerableIterator_1_Clone_m3FAC1A8B76D9D1501933E441CB085FA0C4168F8F_gshared (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * L_2 = (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m39E616E96442485FD7E931F422182E3EE3741408_gshared (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mD2B53E1DA5B40AB9318942F1071AEBB353277AD2_gshared (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_6;
		L_6 = InterfaceFuncInvoker0< DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_6;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_8 = V_1;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_10 = V_1;
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>::Dispose() */, (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.DictionaryEntry>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m769DAD85B6BA7B5539FA6991A7E5D24476168FA8_gshared (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * __this, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_2 = ___predicate0;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_3;
		L_3 = ((  Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * L_4 = (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mED9FE30D754A0ABE546A685684F523BC57509D0E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereEnumerableIterator_1_Clone_mB3FE252392A8FEA3638826A2C4D1195A4D3743BB_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_2 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mB841131399B8BA11B9D6DB37E11F90B1BFFBDA2D_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m819D14CC69CC48B0B84E497DFF1953AAFFF13333_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mD1B249C431E67DD9B73D781BEA79EF23E556B75E_gshared (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___predicate0;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_3;
		L_3 = ((  Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_4 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCCBCF83DC9048D3F82338174D1833F8EB088E773_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, RuntimeObject* ___source0, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereEnumerableIterator_1_Clone_m3F2E30D5F902F3107DCA4D0342E329A9E35CD2B8_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_2 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m303F03CB0C36E67FA3386A339B278E10983613DA_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m428E05857BCB466007F9A6644FA715D3652CA021_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int64>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int64_t L_6;
		L_6 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int64>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int64_t)L_6;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_7 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		int64_t L_8 = V_1;
		NullCheck((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, int64_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_7, (int64_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int64_t L_10 = V_1;
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int64>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mB644E9659730D759B0808E99F0C6E5BC13AC9BC6_gshared (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_1 = (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)__this->get_predicate_4();
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_2 = ___predicate0;
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_3;
		L_3 = ((  Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * (*) (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_1, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_4 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C9FCD876CCE5ED8BB391AE970DBC6D5D1CBDBB2_gshared (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * __this, RuntimeObject* ___source0, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF * WhereEnumerableIterator_1_Clone_mDB2A131AADB8A2DBFCBC090AB607E8E58C2E6E99_gshared (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_1 = (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * L_2 = (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *, RuntimeObject*, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mC7C9B5EC4F703A3ECA7A2B3F017DE383CB3B88B1_gshared (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m85A65F1F5B6B8B2A64D33E23EF4163A514B52A8E_gshared (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = InterfaceFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6;
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_7 = (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)__this->get_predicate_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_1;
		NullCheck((Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_7, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_1;
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector2>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC9D321F735D031A21C73C6246214CE311C05DD82_gshared (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * __this, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_1 = (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)__this->get_predicate_4();
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_2 = ___predicate0;
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_3;
		L_3 = ((  Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * (*) (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_1, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * L_4 = (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *, RuntimeObject*, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mFF43A0851AF3E2469A68EEE2A2698FD2CAC6E640_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereListIterator_1_Clone_m543689012B48160EAE9BC7EBCCE4BA0C39AFC412_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_2 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mF7804B57A97E06FE44F6B6E5ECB860105B14EC3B_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_11 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m367822A36B7AB1F301F12B849EFD9C456F898239_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_4 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mDA4C9C17C33FD872745FB605DD2C98BED61614C8_gshared (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 * WhereSelectArrayIterator_2_Clone_m55F5A06E66988B52DD0A8ED3CF1A50B732752D1A_gshared (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA * L_3 = (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mE0F11B0BF539D18FC63C6482BFE8BA9EC4ACB669_gshared (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_10 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_10);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12;
		L_12 = ((  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  (*) (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>::Dispose() */, (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m33CA934DEA44504987C62F91192F58F1CEEB3C97_gshared (WhereSelectArrayIterator_2_tB49E5D34EACF6AD140F2BA5AAC5BA6CDF1855AEA * __this, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * L_1 = (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m234A805FE82EE1DA48535C098FB1D604CC178E19_gshared (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m4272B21401F439578E98BF9E4206758019EBF7CF_gshared (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 * L_3 = (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m9270DB74097A2166DBE1BB66595888F5C6EAECB4_gshared (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_10 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m80F815929BDD9C3AFD927D6C08C6E28B27BA1A8B_gshared (WhereSelectArrayIterator_2_tC0CEBA847D5CAD09BA08DD4CB18F1D5AA766FC88 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m753B845FC177A4500A5809EA02B94FD14C1017E9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m6D78D257291467E05FDD35D57F87C1B85FC13CF9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * L_3 = (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC8EA524E00550DADCB86D2D527C1BFDEE335EDF6_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_10 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB95AC53D5283844BEFB7F84CFABBED87446942F4_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mF52E446394C3F8DFB90C987A3244FCCC6BA600AD_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_m22ABB7CEF3FF8768C972AF44377BA8D2267B1F4F_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * L_3 = (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mE90B9B8E6833394962A9373FB647D6361B3B6796_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_10 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m51C6FAFCE81BD511E633CBBEC8E2A29EF144F1D7_gshared (WhereSelectArrayIterator_2_t00D4CC16A86C24F0CC80D3112E1FA2D451FF5D0C * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9856D91D728AECE2AB1AF7838E1E617A6E8EF451_gshared (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectArrayIterator_2_Clone_m82E6FFD9B49A17979F63E11BB904547CBF6463AB_gshared (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 * L_3 = (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m46E2FDD3CB9A2AC712A6DBBDB8F2B6C9D15B1732_gshared (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_10 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_10);
		int64_t L_12;
		L_12 = ((  int64_t (*) (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2315BF685035E8950A8ACBECFE5267A85C66BF10_gshared (WhereSelectArrayIterator_2_t725689A969BD74BF4478D4AE9A1CB854EE78B2B2 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m42B6FDAEDB2D48D1090A3E06A3D7F4339CA7DD4D_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA5824D44B54C8AF514D5683EDE0B1FC5834A69A9_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * L_3 = (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m880029BC140EC15B1231301739BF3F74D63E452B_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_10 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m419FD3EEA73CF3A41AA87E1EEB86DC0206657EAE_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m37B6F813DD5D2DBF0B65CEEE8BAA4E079386B942_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mD1461D97262D9D39D4F7B6326C3424D9CEFF4C61_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * L_3 = (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD852569E97B9427E112491B734CB6474FB0F35AF_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_10 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2E8CD2871388CA9F41FA9A04A4CB14B36B1D76A7_gshared (WhereSelectArrayIterator_2_tFCBDA92EB06915053F579B5C24EBAD5DAD1B84B7 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9338E041E5B1577F23D307AB6BD376BF06564E98_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectArrayIterator_2_Clone_m0A6FAC6BC2DE5D218C1A9F83DE77C6139D006708_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * L_3 = (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m5439AF2C7917EEF1DAE308071EDCCE14854A6F25_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_10 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_10);
		int64_t L_12;
		L_12 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m6E34B180A2AA1DD530DF94C76E36F2915B8FDCE6_gshared (WhereSelectArrayIterator_2_tC5B2A0B58012816156D0DFE29BE7E1040876BB66 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mBEC4F9EBEAE90E67BB390693B8DD03559B7FC768_gshared (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A * __this, Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF * WhereSelectArrayIterator_2_Clone_m7C8B89B45DB089758D1E94911F2944990940674E_gshared (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A * __this, const RuntimeMethod* method)
{
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_0 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A * L_3 = (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A *, Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mF7175A7B40227087D8B4B86E8B49405E85D10758_gshared (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_1 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_6 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = V_0;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_7, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_10 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_11 = V_0;
		NullCheck((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_10, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_14 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m0F1909AAAD02DDE7516E989070960B16DA1C1D3F_gshared (WhereSelectArrayIterator_2_tE6174CD0C509980CD4FC665B0523EFF20B57FD7A * __this, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * L_1 = (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *, RuntimeObject*, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m5F914CAB73A76DD185F70F3231EEE01F4EC08415_gshared (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 * __this, DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mC7F5393DCC2916495EE4446A102C060DCD4D233C_gshared (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 * __this, const RuntimeMethod* method)
{
	{
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_0 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 * L_3 = (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 *, DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB8AF019DC36003333E519277EE98024B3D00BAC4_gshared (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 * __this, const RuntimeMethod* method)
{
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_1 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_6 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_8 = V_0;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_7, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_10 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_11 = V_0;
		NullCheck((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_10, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_14 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mDA8DEB8E2138320152D4568F214CEEFBC036E9B1_gshared (WhereSelectArrayIterator_2_t18FDBBA75221FC386EAC56FDF3E62B6250904080 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3578638CBB997C5E554533A672BBBDAEDC95EBE1_gshared (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 * __this, DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mBF556021739D06CD6266F41B5293EC7278B9C874_gshared (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 * __this, const RuntimeMethod* method)
{
	{
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_0 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 * L_3 = (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 *, DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7C2D9F25750353C56D2E0C2F12C2C3ADFD7B531A_gshared (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 * __this, const RuntimeMethod* method)
{
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_1 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_6 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_8 = V_0;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_7, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_10 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_11 = V_0;
		NullCheck((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_10, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93* L_14 = (DataSetU5BU5D_t5432A6959D00D4E6F4823794B8C09B706A427F93*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB96E150984DF6A85312870AA2CA723C300FBCEA9_gshared (WhereSelectArrayIterator_2_tDA10266D517A8AFA0C298B03D46900B155F3EAE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m5C13B8DB70B9BD4846423DAC9C47FD722BD6D8A3_gshared (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF * __this, InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mD528A043480E55F52A851E5C8071074AE31380B1_gshared (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF * __this, const RuntimeMethod* method)
{
	{
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_0 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF * L_3 = (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF *, InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mDFA70DCF89FDB32319F18A4856C8588E0658F223_gshared (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF * __this, const RuntimeMethod* method)
{
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_1 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_6 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_8 = V_0;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_7, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_10 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_11 = V_0;
		NullCheck((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_10, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_14 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB0E5A515080232AFA6B8BB71BE1903231E1C41E5_gshared (WhereSelectArrayIterator_2_t128733060C7A9F304543D1A2BD6CCD655E434FFF * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m82DC9D2BB9026548129B74A38262730F2C801C42_gshared (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 * __this, InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m22C07E91DC3454692F1AD71D5AD6DD8B50FBDFE1_gshared (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 * __this, const RuntimeMethod* method)
{
	{
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_0 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 * L_3 = (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 *, InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m3B322E283C680FEA8116397840B1EFBFC9B146F2_gshared (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 * __this, const RuntimeMethod* method)
{
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_1 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_6 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_8 = V_0;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_7, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_10 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_11 = V_0;
		NullCheck((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_10, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D* L_14 = (InputU5BU5D_tFB6441B46A45CEDD53E696AA0749E8AEE4F89B9D*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Input,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m86A3BA87BCCBFF6634AEF847D67C1C8298D7F96B_gshared (WhereSelectArrayIterator_2_tC083C76CE437563F7840B3348E2A449DBE4506B2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m53EE66B0E7F0BE09588A9005BB0E57E33A3AD277_gshared (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 * __this, MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectArrayIterator_2_Clone_mC559B3908E4794AF9D8608D333B99CB7330DC0A3_gshared (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 * __this, const RuntimeMethod* method)
{
	{
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_0 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 * L_3 = (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 *, MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mB41D508DE0C8441D6B465D557F57FA3C29DA18D4_gshared (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 * __this, const RuntimeMethod* method)
{
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_1 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_6 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_8 = V_0;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_7, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_10 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_11 = V_0;
		NullCheck((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_10);
		int32_t L_12;
		L_12 = ((  int32_t (*) (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_10, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_14 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mA8CADDC5A84C4E3E2FB8908C37CE40CE01CAD9E3_gshared (WhereSelectArrayIterator_2_t9549A375DD94310A4DBF1CD05905F7F5949C8463 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mF44EC0F6DB5E92444BBFE1A1E7B73E6EEC97CBB5_gshared (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 * __this, MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m70AB060435E297375B4402FAB55346124E8E068E_gshared (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 * __this, const RuntimeMethod* method)
{
	{
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_0 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 * L_3 = (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 *, MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mD8BAF0A39F3BC226580D99A266C2C395E11A2A26_gshared (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 * __this, const RuntimeMethod* method)
{
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_1 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_6 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_8 = V_0;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_7, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_10 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_11 = V_0;
		NullCheck((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_10, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0* L_14 = (MemoryU5BU5D_t9C39E079A55F44732D7F244C1347A04772A66ED0*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m82E8CA5A3EA4DC96E1CCF81BC6EB9181C5FEC41C_gshared (WhereSelectArrayIterator_2_tDDDD4785EAFA2C054A55EDE6DA758C69BEFBEFC0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m03D6A793645DB67A51AA6BD7DEC02D5DC1DB2553_gshared (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 * WhereSelectEnumerableIterator_2_Clone_m56F31E918151C9B2A562437BB1111A91F8FC057B_gshared (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * L_3 = (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m3D40C8718C4B47CD9F0F2C472B3BEE5ABD43E389_gshared (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAB259310BE5FDFC165F8445319573B2444C67AD9_gshared (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_11 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_11);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_13;
		L_13 = ((  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  (*) (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>::Dispose() */, (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1DAF4DADD12BABDC477A0D302D5A78A197495865_gshared (WhereSelectEnumerableIterator_2_t3C2B1522DDC7E5F54A4C125B61D45854CA15D02C * __this, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * L_1 = (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m5D17F6FDC61EF5BAAC6022B71257146D2AA70043_gshared (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m6CAEFFA1C102891960A1ECBF22DA543E31FE57C0_gshared (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * L_3 = (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mF7369CBD265AEF953AE723D80982F581FB2FD45F_gshared (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m902032CD1F689E6733927A473F43F1495920D802_gshared (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_11 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m5B2829A836944DB4B0E1A66D4236460F3F509ED5_gshared (WhereSelectEnumerableIterator_2_t950DB65ABCDAF653E6DCAE7E1A1FEC62D9AE236F * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m634CE03BF281A9966A650B2BA6ED44AD72E5879F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m82474F2DE866D303C5767C7B58EE3213342A29F0_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * L_3 = (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAB2AD9EAF60076FC567705357B1A87DCC0FDC6F7_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9AED0076EB03B4E46908FB05BEB74852F542382E_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDF3B69D0756C062EA752AA0B60FA20A65396313F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m24BFAF64B8AEF6BAC15970E8CE4F9192236CCC11_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m48529E6B525DC0A3DE4C3C65EC2F0A1D24A4E263_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * L_3 = (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB529F42305C163995535C0696422D8410CB02BB3_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC11B40068E87BD32531EC0895238F0EF85DDB398_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6B10C66012139D931A3FAC2CF5B589B789C2ABF4_gshared (WhereSelectEnumerableIterator_2_t70C236BD8C0DBBA43FCE3CE4E4F6B545579333EF * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m224C13A1394AF4E8648AA19E1F43B539D503DE99_gshared (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectEnumerableIterator_2_Clone_mE3FFE763A5EA567F25C49021B44EB692803FAAD7_gshared (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * L_3 = (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m763BBC458E80DD48FD371ED224A6C77F0CED79B0_gshared (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m18E9AD31D3EC2697E543AE978A96CC249C75A146_gshared (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_11 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m5380BE3DB2569C2795CE09239AE734BAD36A70FF_gshared (WhereSelectEnumerableIterator_2_t21E5CD7F436948B5D1FC1E9B4801FBBB3F194AED * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2C6BF870C887594C92C96638C777A6F8D363FBE6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mFAB909F2F26271F2629A7E2424FC23F8BAF054B6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * L_3 = (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m82C0D4A9E151A1DAC0C017CA403BAB5CDED9CFD5_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7422C90C467A2D0EF7E7D644EDB241F378A7AECD_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4A570F856A4C2CF183E921AA35177C326F8BAF1C_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m942924EB1F576CB7906FC0D1AE34C855DF1084B9_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_m1D22FFCBE9EDC4BA771C14DF5EAB0AE3DE0335AE_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * L_3 = (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2D488A3025C16C7E87BF820DA7BCF3D6A226DA23_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBC6D67E32DDE2CAE404BDB1BA4DC413948BAD258_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7BE31A8F105546603E49F9E36C977E10736266BC_gshared (WhereSelectEnumerableIterator_2_t25EA10EC3147E08EEA83832A057482C587703B9D * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE1715111FE127BBB656AF0C4473285A0FEE2B537_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectEnumerableIterator_2_Clone_mBD5077D0F8F948622311102354CBF184E6D848A6_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * L_3 = (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m81800FC99E6FB80846D7DF96755E8D459411C1AF_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9999F84F40C27A273DB4DF3DFF3C4E82E9BD85C9_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_11 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mFDAB51910E8AF7000279D6229E103146B7661FDC_gshared (WhereSelectEnumerableIterator_2_tCCA09BC0C4F4F9A128BFB41532692C5D977A8D3B * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m0CC3A2D28F4C9BBA58B48E9A1A543DBEBEAFF841_gshared (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * __this, RuntimeObject* ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF * WhereSelectEnumerableIterator_2_Clone_mBBF47155A15D3419A1A902B2F698C87E4516C3A7_gshared (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * L_3 = (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC *, RuntimeObject*, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD25B705C90058C96BDA7BFCDA57B42E34B4ADE83_gshared (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m1D60103DA72F9D31300C141F0BF9128A422998E5_gshared (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = InterfaceFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_8 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_11 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_1;
		NullCheck((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_11, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m81B7B63C113B6D2D9CBF98975934BCA99CC9B233_gshared (WhereSelectEnumerableIterator_2_t3D8853925ADD4F9FF4A1178A12E66F63C4B459EC * __this, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * L_1 = (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *, RuntimeObject*, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m10D6AED3564F59564B4DE9C3F7233E7CFA10A06A_gshared (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * __this, RuntimeObject* ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_mF9BD7759091A29658A29EAEF38BBDBDF9C918D48_gshared (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * L_3 = (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 *, RuntimeObject*, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9391ACC749F7EB4F8AD2A6BC7FD42A77A04208B0_gshared (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mA9326FFED14BFC3F8C80A98F49DC0AC7F0532555_gshared (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Layer/DataSet>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_6;
		L_6 = InterfaceFuncInvoker0< DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Layer/DataSet>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_6;
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_8 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_9 = V_1;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_11 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_12 = V_1;
		NullCheck((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_11, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA05CF20716449E6F4D38E8F3DB97BEC7B36D46F6_gshared (WhereSelectEnumerableIterator_2_t27CF0861A987498913D97EF38366E92ED670EA53 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6CF24E6A07E6DF5DB17DF3FE7D2551AECF03BABC_gshared (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * __this, RuntimeObject* ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m561A9083D85AF245F66B2AD0828C9468D72E3046_gshared (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * L_3 = (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 *, RuntimeObject*, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mA5218F596D2B96BA45E4EF1D446866B1B35EC8AF_gshared (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m08010416A8C60104360E859C425C8C34F73AC575_gshared (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Layer/DataSet>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_6;
		L_6 = InterfaceFuncInvoker0< DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Layer/DataSet>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_6;
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_8 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_9 = V_1;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_11 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_12 = V_1;
		NullCheck((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_11, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mF5034B00724FBFE21889D0081EA8A2FB0FE8DB49_gshared (WhereSelectEnumerableIterator_2_t5545AAD222A45410B66E6485DA060DE669F542B1 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mB89F6ED85DD28F2E10B35642BE0358051F9625F2_gshared (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * __this, RuntimeObject* ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_mAEFF239E302C67BB3E3304A6668657568B43DFDC_gshared (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * L_3 = (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 *, RuntimeObject*, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9C153312A91AE286F0EC56E266456C1C1D9411A2_gshared (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m78C8B2712A20A01D2DB60E6E839207EB57CA0AC2_gshared (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Input>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_6;
		L_6 = InterfaceFuncInvoker0< Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Input>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_6;
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_8 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_9 = V_1;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_11 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_12 = V_1;
		NullCheck((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_11, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m801710ECEF5F0C72DA1D004DC87EB2F92EB31522_gshared (WhereSelectEnumerableIterator_2_tB2E0C5B974F9D244071FB3E0FED47F7C9390C587 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2068CF87E3642427BAF41E972A6E12EE1BBFA5B1_gshared (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * __this, RuntimeObject* ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mE3F29F9B01ECA752EC554333743131AFA26C8C5D_gshared (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * L_3 = (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 *, RuntimeObject*, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m3F34CCEF8C16284A27B2FB47423F1627939A446A_gshared (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m4218F2B68AB3ECAD2AD77E8E84BAF374DADED092_gshared (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Input>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_6;
		L_6 = InterfaceFuncInvoker0< Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Input>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_6;
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_8 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_9 = V_1;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_11 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_12 = V_1;
		NullCheck((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_11, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Input,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m3E83956136B9B3BAA7B79DAB83505E3184E44D3E_gshared (WhereSelectEnumerableIterator_2_t3B763CCFC5825A6E1EC65A2392481BA021388798 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m4039C32D143C14D231CEDDF58D2FB9EDEDD4CDF2_gshared (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * __this, RuntimeObject* ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectEnumerableIterator_2_Clone_mB6049F192D0B24533C70A1FABE45F6A32EE6695D_gshared (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * L_3 = (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 *, RuntimeObject*, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC13B483C7553C940C01AFB4A2223EDE560421203_gshared (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mA23204FC2E94278DF14566F901DF9EA93D098F02_gshared (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Memory>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_6;
		L_6 = InterfaceFuncInvoker0< Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Memory>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_6;
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_8 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_9 = V_1;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_11 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_12 = V_1;
		NullCheck((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_11, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m03602D3E88738625D7E37E9C45BB6DDDBEDEA360_gshared (WhereSelectEnumerableIterator_2_t44C033B9856DBA7CBA48AC5B3DF280F797CB4E84 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE59C575F2CAE1CC26DC210A1639CC17734F05494_gshared (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * __this, RuntimeObject* ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mA7275F13B7555854FB9D8779DB8323F8062E077F_gshared (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * L_3 = (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 *, RuntimeObject*, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mCBCE81E31C093A6C84E51A3076BD2294BCD9B57D_gshared (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB261D2346D5EA05B9E8429AA8CBA7C6B9C0E361F_gshared (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.Barracuda.Model/Memory>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_6;
		L_6 = InterfaceFuncInvoker0< Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.Barracuda.Model/Memory>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_6;
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_8 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_9 = V_1;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_11 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_12 = V_1;
		NullCheck((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_11, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m8A2B4C3B9CF22AAFD2113850090A146D506C0137_gshared (WhereSelectEnumerableIterator_2_tA20945BC5DADF10DFFA0D2A4E876BB9410F63DE6 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCCCBF74F2693FAD47B521EC7C35D67FCAE5A31D0_gshared (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		((  void (*) (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 * WhereSelectListIterator_2_Clone_m7147EC10DAEA1AF65E8CBFD5F27308E3B878F027_gshared (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_2 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 * L_3 = (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mD3F457AE2CAB67C8ABE9EF44772058F567C3CC32_gshared (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B * L_11 = (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_11);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_13;
		L_13 = ((  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  (*) (Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t865AED65B03F7864D64B01BAABFCB0ACAF231E3B *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.DictionaryEntry>::Dispose() */, (Iterator_1_t55BB654766384A6772127C44074D90C5256518A1 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.DictionaryEntry>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m779FC2DCBD263C922A90787F996BADC60F9F5EBF_gshared (WhereSelectListIterator_2_t1C2BD0497D84E3A7A79C4C23167C16A00DFBF966 * __this, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A * L_1 = (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tC9600E60CFF9736BF291A2F61A74AB18D4E3914A *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m46C9D846839C09BE2917636F0C57D8DE49C3157E_gshared (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mA3B8485062030924299BA0E2DAC49675361F02D6_gshared (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_2 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 * L_3 = (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0C64B51508852AC4EB6D41D8178AC3E0E715CB3A_gshared (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E * L_11 = (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tE11D275E92E41C7F0153BCC1A05E2657AECFED9E *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA0D06E15DAC9CE66E1D7D032733A299D0EC817B0_gshared (WhereSelectListIterator_2_t464A050BB0132CEACEB1D9578DA9AA5AC98B5238 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m530D4471452DA4089C130C0D9FC5910907BF6007_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m72EFE228727E1A3BF476F5CF995391D549ED4C1E_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * L_3 = (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB979C50B4E1833CA8C6A8394B5503C7FEB4A608A_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB12D7743450CEE6D221C22755DDB9F022B7E24B1_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m895E21AE9AB1E3F19B3147EDC913BB567B1A65C7_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mEE6375B2C79172E13732CA49AAF389493C1C7100_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_2 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * L_3 = (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m637B802A50BA94CD511636CAF5D912C6B96B18A1_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * L_11 = (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7F75FF628D2E99D2BA127B84FDD08DD88048ADB0_gshared (WhereSelectListIterator_2_t4CC3FE3A35610DC6F761EE7DB863B845957AD325 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAEB750612D1BB9E1154D74150FC0E4CD5030210B_gshared (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectListIterator_2_Clone_mEBD5153828922B237893DBF318DF67E3623B5E85_gshared (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_2 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 * L_3 = (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5762E37F469AADADE40067C2350AD0DD2F311E99_gshared (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * L_11 = (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC66A59B136CA953EE474B029D4F7FF9D9F53529C_gshared (WhereSelectListIterator_2_t029DF87EF6C1A59C1658F051FF560E0216888A24 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA0D61B688D5EE4E84300EA96C87ED9F3E10D5EA9_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mE40F022902D030D86E465678E5DD79B3058FE2CB_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * L_3 = (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDEB78D7AB98D0FDC13661615FDBC0C01A621E84F_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9633A851E09C546940C2D5C7EF8CB7C501784EB3_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA18E5B755DF06EAE14007C295ACE48C7E0615BAE_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mFEFF616AB589FF68AA4BCFE920814C287AC50268_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_2 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * L_3 = (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m758147C75B5A6CB8C86D4FEA039965940D0BDD6C_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * L_11 = (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB03479084DC9989DEAC9938DC78329DC769EFA14_gshared (WhereSelectListIterator_2_tA7C52B3E46CAC7800298BB868DD54565FDCB75B6 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5F84B643134CB0A72EE2744BF02ED2C51BD7729A_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		((  void (*) (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE * WhereSelectListIterator_2_Clone_mBBDDAF037D47316823BF2F2618DD7B86B1C429F7_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_2 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * L_3 = (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3872D5CEA2C9BDF338C106938244AF47C95BCDB2_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 * L_11 = (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11);
		int64_t L_13;
		L_13 = ((  int64_t (*) (Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tCA3E9A68051723CDABE44FC0BAE52FE7599059D6 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int64>::Dispose() */, (Iterator_1_tF88FA02D56A55D26D525180DE0108FA4F019BECE *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Int64>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBB616ADFF1E5BB22A53112DF8EF998F5049D4954_gshared (WhereSelectListIterator_2_tB72C4254D904FF99DDF6A7B544158C7E96DF5323 * __this, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 * L_1 = (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tBAC8281C998E41429788C96260CB05A7E0471BC1 *, RuntimeObject*, Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t03B9AF86FB7E93B62590F1CBD16276EF7AA1B215 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA7D0CC66CE654E9C55D615B7B36FFDB0A40CEE37_gshared (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C * __this, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___source0, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * ___predicate1, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		((  void (*) (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF * WhereSelectListIterator_2_Clone_mCEAE700DB4B782CBFB41E6A24790F02ABF7B977A_gshared (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C * __this, const RuntimeMethod* method)
{
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)__this->get_source_3();
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_1 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_2 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C * L_3 = (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C *, List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_1, (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m530AD95D6D3E6870B1DF37D32004BFF1850AC352_gshared (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_3 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)__this->get_source_3();
		NullCheck((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_3);
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  L_4;
		L_4 = ((  Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781  (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * L_5 = (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)__this->get_address_of_enumerator_6();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		L_6 = Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_inline((Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_6;
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_7 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 * L_8 = (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)__this->get_predicate_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_9 = V_1;
		NullCheck((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t06E4D1F7A5FCD6F9551A7741FF459CE87D43C148 *)L_8, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 * L_11 = (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)__this->get_selector_5();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = V_1;
		NullCheck((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t3C82644A98345A1283AC8EA5C07A6C505404A7D1 *)L_11, (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * L_14 = (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF378337D9CA43F03755456627ECC0436E94A8B9C((Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)(Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector2>::Dispose() */, (Iterator_1_tC65CA16F3F1C7E3921BFD2B03AC69FE5BF6996BF *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Vector4,UnityEngine.Vector2>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDC0C113D11D28FCB011FB0D3C4623684882F961A_gshared (WhereSelectListIterator_2_t601C7D0CDDABF88C6F98DA7E13B6AEA300928D0C * __this, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A * L_0 = ___predicate0;
		WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C * L_1 = (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_tA5C39F085357986D0D6ABAC117C73C8BAE320A2C *, RuntimeObject*, Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t98EC33D5C203218F10A98B08E709DBFB2353DB9A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD5DC1ABF095943B5F013C20BF8999FF378CE90F1_gshared (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B * __this, List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_mF158BDCD4FA57DA397D58FBC4D2881F93934D08A_gshared (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B * __this, const RuntimeMethod* method)
{
	{
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_0 = (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_2 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B * L_3 = (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B *, List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m18A6D2C4E230D3EB6B3AB6AE7D4C41B5EC9943E8_gshared (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_3 = (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)__this->get_source_3();
		NullCheck((List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_3);
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  L_4;
		L_4 = ((  Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  (*) (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * L_5 = (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)__this->get_address_of_enumerator_6();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_6;
		L_6 = Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_inline((Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_6;
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_8 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_9 = V_1;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 * L_11 = (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_12 = V_1;
		NullCheck((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD9A9D18EB6F45C5264C799A41D1189FCB485A901 *)L_11, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * L_14 = (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2405931F447489188E5350DACBC0A3B40B5EEB49((Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m04095FC553E28D4629F0DEFAF17D9B8713546C60_gshared (WhereSelectListIterator_2_tA025DC6A3BFC47CD049A1ECD1F1B8B599CF3497B * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m52729B2457824074B1F564826C7334923C4C3119_gshared (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 * __this, List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * ___source0, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * ___predicate1, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mCCFFDF69F4AC99694DE856DC271F9B9B6E8BA943_gshared (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_0 = (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)__this->get_source_3();
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_1 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_2 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 * L_3 = (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 *, List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *, Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_0, (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_1, (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4DD9EABB6FD80CF8952D0368D5EA4FD65A3F40F0_gshared (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 * L_3 = (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)__this->get_source_3();
		NullCheck((List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_3);
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  L_4;
		L_4 = ((  Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C  (*) (List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFB358D6C3EA9B78D153603ACE4FD35EC45C67351 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * L_5 = (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)__this->get_address_of_enumerator_6();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_6;
		L_6 = Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_inline((Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_6;
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_7 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tF48C6561BC5090026A3B249255BE66032A633363 * L_8 = (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)__this->get_predicate_4();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_9 = V_1;
		NullCheck((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tF48C6561BC5090026A3B249255BE66032A633363 *)L_8, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F * L_11 = (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)__this->get_selector_5();
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_12 = V_1;
		NullCheck((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *, DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t140262E8FFC20DDF4CC62BD287A06AA3EFE8B86F *)L_11, (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * L_14 = (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2405931F447489188E5350DACBC0A3B40B5EEB49((Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)(Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Layer/DataSet,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mDA70EC7338E83D9C70A2FAA6DB18A1A58BA73E75_gshared (WhereSelectListIterator_2_tF29FFDF2C84A0D79AEA3FCD19E51CC646EDBFDE7 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE297A007A1E3CF82D941DF061BCD631F4E9338CE_gshared (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 * __this, List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_m222C8559A3E645489DEF01BF13C4F3FAD39A1FE2_gshared (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_0 = (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_2 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 * L_3 = (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 *, List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFEFF1005A96C9D81B9E0D98EF252606DCC395320_gshared (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_3 = (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)__this->get_source_3();
		NullCheck((List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_3);
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  L_4;
		L_4 = ((  Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  (*) (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * L_5 = (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)__this->get_address_of_enumerator_6();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_6;
		L_6 = Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_inline((Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_6;
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_8 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_9 = V_1;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E * L_11 = (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_12 = V_1;
		NullCheck((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tA66A532F4A09079B3A082FC6DB0333644734D21E *)L_11, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * L_14 = (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mE7761C9327156038FBF466EC2A54625E6B871D25((Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m7245EDAB98D72B7D6C2109742CE6359900677B7A_gshared (WhereSelectListIterator_2_tDCAF84E5FC16A9313D23CD6DE34BC0F6DEC202A2 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6FEAE756DB1F613FB4E658861EDC2B98D28303F8_gshared (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A * __this, List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * ___source0, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * ___predicate1, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mBCB4A3076545CB909C911A0FA9245FB9A8E33DB8_gshared (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A * __this, const RuntimeMethod* method)
{
	{
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_0 = (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)__this->get_source_3();
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_1 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_2 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A * L_3 = (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A *, List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *, Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_0, (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_1, (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m69D368ACD4650FDD9D981AE5CDC7E749DFF5CFE6_gshared (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A * L_3 = (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)__this->get_source_3();
		NullCheck((List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_3);
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  L_4;
		L_4 = ((  Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A  (*) (List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t7DCE5D217C42A6EE2E9BD4CCADDB45339F79235A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * L_5 = (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)__this->get_address_of_enumerator_6();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_6;
		L_6 = Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_inline((Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_6;
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_7 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C * L_8 = (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)__this->get_predicate_4();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_9 = V_1;
		NullCheck((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t96F62FEF75CAD42A736939A6F0D64CC2424AFE2C *)L_8, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 * L_11 = (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)__this->get_selector_5();
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_12 = V_1;
		NullCheck((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *, Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4A6D718654D4BC00497D058DAED29CF73AA28779 *)L_11, (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * L_14 = (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mE7761C9327156038FBF466EC2A54625E6B871D25((Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)(Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Input,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m96A187BCACCC10FDB7BFA92B33EF838471006531_gshared (WhereSelectListIterator_2_tA0F4C9C3B7BC1034DEB37A312463981E225E888A * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mABB5735D0F731D48A6B9D8EE1A7F2F0D53F13281_gshared (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 * __this, List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		((  void (*) (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 * WhereSelectListIterator_2_Clone_m57941CC4E2F76304D9DF6CE3D941673EB452D131_gshared (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 * __this, const RuntimeMethod* method)
{
	{
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_0 = (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_2 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 * L_3 = (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 *, List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6CF0553A7D76F7EC9FA48FBEF03D8EC833F2FD90_gshared (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_3 = (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)__this->get_source_3();
		NullCheck((List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_3);
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  L_4;
		L_4 = ((  Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  (*) (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * L_5 = (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)__this->get_address_of_enumerator_6();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_6;
		L_6 = Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_inline((Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_6;
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_8 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_9 = V_1;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 * L_11 = (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_12 = V_1;
		NullCheck((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t150DF01470A892D7A30DB635AD99F9C3F7AACA69 *)L_11, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * L_14 = (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mB2B075B324890183058DB1A19D8A0D282C164180((Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCFFC952B03DBE4E956DE317DB9704D936AEA2379 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m696AE8CC1E6DA05A40BEB8CC9ECFCC0095FE39C8_gshared (WhereSelectListIterator_2_t2FC18BF9A427FF359335A00807B8F1A754D469D4 * __this, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA * L_1 = (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t9F4DDC70173BABD72AEC7AA00D62F4FAE2613CEA *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7BECD376F7F0B85CE7E4E075AC0790FBBDC9099A_gshared (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA * __this, List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * ___source0, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * ___predicate1, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m5E0B92704B1EBDF2FBC50D84F5E99D9B698739B0_gshared (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA * __this, const RuntimeMethod* method)
{
	{
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_0 = (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)__this->get_source_3();
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_1 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_2 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA * L_3 = (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA *, List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *, Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_0, (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_1, (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m13625768B8F3AFEFD9C44C5FB28140F62BB4A43C_gshared (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A * L_3 = (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)__this->get_source_3();
		NullCheck((List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_3);
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  L_4;
		L_4 = ((  Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51  (*) (List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tB413F794747F0B98730F738C4B20698F0EFCCE5A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * L_5 = (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)__this->get_address_of_enumerator_6();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_6;
		L_6 = Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_inline((Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_6;
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_7 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A * L_8 = (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)__this->get_predicate_4();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_9 = V_1;
		NullCheck((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t4A996E003E6CDD6275E9A4F4853D7E2B4377000A *)L_8, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 * L_11 = (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)__this->get_selector_5();
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_12 = V_1;
		NullCheck((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *, Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t848F0DF05C62BA5868EAE2B1494917CC97256D53 *)L_11, (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * L_14 = (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mB2B075B324890183058DB1A19D8A0D282C164180((Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)(Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.Barracuda.Model/Memory,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mFA8FAB91C08BD28A236CAB12A0F4945503894F6F_gshared (WhereSelectListIterator_2_tAA579E50ABC38C9404DBEA8EDCF5234AEDA624EA * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Enumerator_get_Current_m32439407464C10970CC963587D0D2E0DD861ED9B_gshared_inline (Enumerator_tF6B201E7214E46815E24879BFB75303CF3649781 * __this, const RuntimeMethod* method)
{
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )__this->get_current_3();
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  Enumerator_get_Current_mC5F546C8FDE405777A11D2C286DCAA65C3AF48D1_gshared_inline (Enumerator_t87D7DF437762F52EF13F0ACD0B1C80A68E1A206C * __this, const RuntimeMethod* method)
{
	{
		DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5  L_0 = (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )__this->get_current_3();
		return (DataSet_t53F30983FCDD0F02D436974D115EB3E500DFADB5 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  Enumerator_get_Current_mEBD55114341C5C0FABCAF8CF9AA6F295EC445C85_gshared_inline (Enumerator_t0AB9384CBD539DBA7B1AA6A68CFED8CEA81ABE3A * __this, const RuntimeMethod* method)
{
	{
		Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0  L_0 = (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )__this->get_current_3();
		return (Input_t83E7ABAB1EC4A32894074F0347E95BE3B11E84F0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  Enumerator_get_Current_m300A3BE15712DF79B7C288918CBD48FA6DEAE534_gshared_inline (Enumerator_t3638B2629D9DF41CCB3ED9EF6D758CA0029AFE51 * __this, const RuntimeMethod* method)
{
	{
		Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E  L_0 = (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )__this->get_current_3();
		return (Memory_tA8D2308DD3D8D02240F0F41896CD2382AE4BBB2E )L_0;
	}
}
