// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStormSchedule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStormSchedule() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStormSchedule();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSSStormSchedule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStormSchedule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStormSchedule, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStormSchedule"), sizeof(FSSStormSchedule), Get_Z_Construct_UScriptStruct_FSSStormSchedule_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStormSchedule>()
{
	return FSSStormSchedule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStormSchedule(FSSStormSchedule::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStormSchedule"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormSchedule
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStormSchedule()
	{
		UScriptStruct::DeferCppStructOps<FSSStormSchedule>(FName(TEXT("SSStormSchedule")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStormSchedule;
	struct Z_Construct_UScriptStruct_FSSStormSchedule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phaseLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phaseLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_endRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStormSchedule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_phaseLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_phaseLevel = { "phaseLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, phaseLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_phaseLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_phaseLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startLocation = { "startLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, startLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startRadius = { "startRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, startRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endLocation = { "endLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, endLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStormSchedule" },
		{ "ModuleRelativePath", "Public/SSStormSchedule.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endRadius = { "endRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStormSchedule, endRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStormSchedule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_phaseLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_startRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStormSchedule_Statics::NewProp_endRadius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStormSchedule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSStormSchedule",
		sizeof(FSSStormSchedule),
		alignof(FSSStormSchedule),
		Z_Construct_UScriptStruct_FSSStormSchedule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStormSchedule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStormSchedule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStormSchedule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStormSchedule"), sizeof(FSSStormSchedule), Get_Z_Construct_UScriptStruct_FSSStormSchedule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStormSchedule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStormSchedule_Hash() { return 68259793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
