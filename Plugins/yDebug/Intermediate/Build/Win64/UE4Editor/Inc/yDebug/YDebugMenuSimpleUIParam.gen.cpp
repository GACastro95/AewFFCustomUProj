// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuSimpleUIParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuSimpleUIParam() {}
// Cross Module References
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuCallbackBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FYDebugMenuSimpleUIParam>() == std::is_polymorphic<FYDebugMenuSimpleUIParamBase>(), "USTRUCT FYDebugMenuSimpleUIParam cannot be polymorphic unless super FYDebugMenuSimpleUIParamBase is polymorphic");

class UScriptStruct* FYDebugMenuSimpleUIParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YDEBUG_API uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam, Z_Construct_UPackage__Script_yDebug(), TEXT("YDebugMenuSimpleUIParam"), sizeof(FYDebugMenuSimpleUIParam), Get_Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Hash());
	}
	return Singleton;
}
template<> YDEBUG_API UScriptStruct* StaticStruct<FYDebugMenuSimpleUIParam>()
{
	return FYDebugMenuSimpleUIParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDebugMenuSimpleUIParam(FYDebugMenuSimpleUIParam::StaticStruct, TEXT("/Script/yDebug"), TEXT("YDebugMenuSimpleUIParam"), false, nullptr, nullptr);
static struct FScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSimpleUIParam
{
	FScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSimpleUIParam()
	{
		UScriptStruct::DeferCppStructOps<FYDebugMenuSimpleUIParam>(FName(TEXT("YDebugMenuSimpleUIParam")));
	}
} ScriptStruct_yDebug_StaticRegisterNativesFYDebugMenuSimpleUIParam;
	struct Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuSimpleUIParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDebugMenuSimpleUIParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuSimpleUIParam" },
		{ "ModuleRelativePath", "Public/YDebugMenuSimpleUIParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuSimpleUIParam, Callback), Z_Construct_UClass_UYDebugMenuCallbackBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewProp_Callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::NewProp_Callback,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
		Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParamBase,
		&NewStructOps,
		"YDebugMenuSimpleUIParam",
		sizeof(FYDebugMenuSimpleUIParam),
		alignof(FYDebugMenuSimpleUIParam),
		Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDebugMenuSimpleUIParam"), sizeof(FYDebugMenuSimpleUIParam), Get_Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuSimpleUIParam_Hash() { return 2360991729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
