// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraHomingParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraHomingParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraHomingParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHomingMode();
// End Cross Module References
class UScriptStruct* FSSCameraHomingParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraHomingParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraHomingParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraHomingParam"), sizeof(FSSCameraHomingParam), Get_Z_Construct_UScriptStruct_FSSCameraHomingParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraHomingParam>()
{
	return FSSCameraHomingParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraHomingParam(FSSCameraHomingParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraHomingParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraHomingParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraHomingParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraHomingParam>(FName(TEXT("SSCameraHomingParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraHomingParam;
	struct Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixTargetYaw_MetaData[];
#endif
		static void NewProp_FixTargetYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixTargetYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableWhenUserRotate_MetaData[];
#endif
		static void NewProp_DisableWhenUserRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableWhenUserRotate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraHomingParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraHomingParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraHomingParam" },
		{ "ModuleRelativePath", "Public/SSCameraHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraHomingParam, Mode), Z_Construct_UEnum_ABP_200508_ESSHomingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraHomingParam" },
		{ "ModuleRelativePath", "Public/SSCameraHomingParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraHomingParam, RotateSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraHomingParam" },
		{ "ModuleRelativePath", "Public/SSCameraHomingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw_SetBit(void* Obj)
	{
		((FSSCameraHomingParam*)Obj)->FixTargetYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw = { "FixTargetYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraHomingParam), &Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraHomingParam" },
		{ "ModuleRelativePath", "Public/SSCameraHomingParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate_SetBit(void* Obj)
	{
		((FSSCameraHomingParam*)Obj)->DisableWhenUserRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate = { "DisableWhenUserRotate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCameraHomingParam), &Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_RotateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_FixTargetYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::NewProp_DisableWhenUserRotate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSCameraHomingParam",
		sizeof(FSSCameraHomingParam),
		alignof(FSSCameraHomingParam),
		Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraHomingParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraHomingParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraHomingParam"), sizeof(FSSCameraHomingParam), Get_Z_Construct_UScriptStruct_FSSCameraHomingParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraHomingParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraHomingParam_Hash() { return 3758839911U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
