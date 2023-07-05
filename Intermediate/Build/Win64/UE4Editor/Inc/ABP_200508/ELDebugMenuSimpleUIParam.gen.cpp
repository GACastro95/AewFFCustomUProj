// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuSimpleUIParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuSimpleUIParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuCallbackBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELDebugMenuSimpleUIParam>() == std::is_polymorphic<FELDebugMenuSimpleUIParamBase>(), "USTRUCT FELDebugMenuSimpleUIParam cannot be polymorphic unless super FELDebugMenuSimpleUIParamBase is polymorphic");

class UScriptStruct* FELDebugMenuSimpleUIParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELDebugMenuSimpleUIParam"), sizeof(FELDebugMenuSimpleUIParam), Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELDebugMenuSimpleUIParam>()
{
	return FELDebugMenuSimpleUIParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDebugMenuSimpleUIParam(FELDebugMenuSimpleUIParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELDebugMenuSimpleUIParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParam()
	{
		UScriptStruct::DeferCppStructOps<FELDebugMenuSimpleUIParam>(FName(TEXT("ELDebugMenuSimpleUIParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuSimpleUIParam;
	struct Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDebugMenuSimpleUIParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuSimpleUIParam" },
		{ "ModuleRelativePath", "Public/ELDebugMenuSimpleUIParam.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuSimpleUIParam, Callback), Z_Construct_UClass_UELDebugMenuCallbackBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::NewProp_Callback,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase,
		&NewStructOps,
		"ELDebugMenuSimpleUIParam",
		sizeof(FELDebugMenuSimpleUIParam),
		alignof(FELDebugMenuSimpleUIParam),
		Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDebugMenuSimpleUIParam"), sizeof(FELDebugMenuSimpleUIParam), Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParam_Hash() { return 1934843804U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
