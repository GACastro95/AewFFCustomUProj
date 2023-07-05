// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraSituationParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraSituationParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraSituationParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSCameraSituationParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSCameraSituationParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSCameraSituationParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraSituationParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraSituationParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraSituationParam"), sizeof(FSSCameraSituationParam), Get_Z_Construct_UScriptStruct_FSSCameraSituationParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraSituationParam>()
{
	return FSSCameraSituationParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraSituationParam(FSSCameraSituationParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraSituationParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraSituationParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraSituationParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraSituationParam>(FName(TEXT("SSCameraSituationParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraSituationParam;
	struct Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictUserCameraRotation_MetaData[];
#endif
		static void NewProp_RestrictUserCameraRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RestrictUserCameraRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraSituationParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraSituationParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraSituationParam" },
		{ "ModuleRelativePath", "Public/SSCameraSituationParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation_SetBit(void* Obj)
	{
		((FSSCameraSituationParam*)Obj)->RestrictUserCameraRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation = { "RestrictUserCameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraSituationParam), &Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::NewProp_RestrictUserCameraRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSCameraSituationParam",
		sizeof(FSSCameraSituationParam),
		alignof(FSSCameraSituationParam),
		Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraSituationParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraSituationParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraSituationParam"), sizeof(FSSCameraSituationParam), Get_Z_Construct_UScriptStruct_FSSCameraSituationParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraSituationParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraSituationParam_Hash() { return 768503349U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
