// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventCameraDOF.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventCameraDOF() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCameraDOF();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventTarget();
// End Cross Module References
class UScriptStruct* FCareerEventCameraDOF::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraDOF_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventCameraDOF, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventCameraDOF"), sizeof(FCareerEventCameraDOF), Get_Z_Construct_UScriptStruct_FCareerEventCameraDOF_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventCameraDOF>()
{
	return FCareerEventCameraDOF::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventCameraDOF(FCareerEventCameraDOF::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventCameraDOF"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraDOF
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraDOF()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventCameraDOF>(FName(TEXT("CareerEventCameraDOF")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraDOF;
	struct Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFocusOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFocusOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFocusOffsetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFocusOffsetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fAperture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAperture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fApertureOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fApertureOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fApertureOffsetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fApertureOffsetTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventCameraDOF>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FCareerEventCameraDOF*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerEventCameraDOF), &Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffset = { "fFocusOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, fFocusOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffsetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffsetTime = { "fFocusOffsetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, fFocusOffsetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffsetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffsetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fAperture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fAperture = { "fAperture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, fAperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fAperture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffset = { "fApertureOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, fApertureOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffsetTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraDOF" },
		{ "ModuleRelativePath", "Public/CareerEventCameraDOF.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffsetTime = { "fApertureOffsetTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraDOF, fApertureOffsetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffsetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffsetTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fFocusOffsetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fAperture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::NewProp_fApertureOffsetTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerEventCameraDOF",
		sizeof(FCareerEventCameraDOF),
		alignof(FCareerEventCameraDOF),
		Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCameraDOF()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraDOF_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventCameraDOF"), sizeof(FCareerEventCameraDOF), Get_Z_Construct_UScriptStruct_FCareerEventCameraDOF_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventCameraDOF_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraDOF_Hash() { return 3317167744U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
