// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameCareerResult();
// End Cross Module References
class UScriptStruct* FMiniGameInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameInfo"), sizeof(FMiniGameInfo), Get_Z_Construct_UScriptStruct_FMiniGameInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameInfo>()
{
	return FMiniGameInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameInfo(FMiniGameInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameInfo()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameInfo>(FName(TEXT("MiniGameInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameInfo;
	struct Z_Construct_UScriptStruct_FMiniGameInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameId_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiniGameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCareer_MetaData[];
#endif
		static void NewProp_IsCareer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCareer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CareerCity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerCity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CareerCity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CareerResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CareerResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_Inner = { "MiniGameId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameInfo" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId = { "MiniGameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameInfo, MiniGameId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameInfo" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameInfo" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer_SetBit(void* Obj)
	{
		((FMiniGameInfo*)Obj)->IsCareer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer = { "IsCareer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGameInfo), &Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameInfo" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity = { "CareerCity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameInfo, CareerCity), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameInfo" },
		{ "ModuleRelativePath", "Public/MiniGameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult = { "CareerResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameInfo, CareerResult), Z_Construct_UEnum_ABP_200508_EMiniGameCareerResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_MiniGameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_IsCareer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerCity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameInfo_Statics::NewProp_CareerResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGameInfo",
		sizeof(FMiniGameInfo),
		alignof(FMiniGameInfo),
		Z_Construct_UScriptStruct_FMiniGameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameInfo"), sizeof(FMiniGameInfo), Get_Z_Construct_UScriptStruct_FMiniGameInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameInfo_Hash() { return 2736953822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
