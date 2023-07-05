// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFlexMatchMakeStart_RequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFlexMatchMakeStart_RequestData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchUserData();
// End Cross Module References
class UScriptStruct* FELSSFlexMatchMakeStart_RequestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSFlexMatchMakeStart_RequestData"), sizeof(FELSSFlexMatchMakeStart_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSFlexMatchMakeStart_RequestData>()
{
	return FELSSFlexMatchMakeStart_RequestData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData(FELSSFlexMatchMakeStart_RequestData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSFlexMatchMakeStart_RequestData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStart_RequestData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStart_RequestData()
	{
		UScriptStruct::DeferCppStructOps<FELSSFlexMatchMakeStart_RequestData>(FName(TEXT("ELSSFlexMatchMakeStart_RequestData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSFlexMatchMakeStart_RequestData;
	struct Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSBuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSBuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSDataId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSDataId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSAcceptSinglePlay_MetaData[];
#endif
		static void NewProp_SSAcceptSinglePlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SSAcceptSinglePlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSinglePlayFixedSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSSinglePlayFixedSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSPlayerRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSPlayerRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSFlexMatchMakeStart_RequestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, UserData), Z_Construct_UScriptStruct_FELSSFlexMatchUserData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSBuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSBuildId = { "SSBuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, SSBuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSBuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSBuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSDataId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSDataId = { "SSDataId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, SSDataId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSDataId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay_SetBit(void* Obj)
	{
		((FELSSFlexMatchMakeStart_RequestData*)Obj)->SSAcceptSinglePlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay = { "SSAcceptSinglePlay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSFlexMatchMakeStart_RequestData), &Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSSinglePlayFixedSecond_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSSinglePlayFixedSecond = { "SSSinglePlayFixedSecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, SSSinglePlayFixedSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSSinglePlayFixedSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSSinglePlayFixedSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSPlayerRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSPlayerRegion = { "SSPlayerRegion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, SSPlayerRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSPlayerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSPlayerRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_GroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFlexMatchMakeStart_RequestData" },
		{ "ModuleRelativePath", "Public/ELSSFlexMatchMakeStart_RequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSFlexMatchMakeStart_RequestData, GroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_GroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSBuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSDataId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSAcceptSinglePlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSSinglePlayFixedSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_SSPlayerRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::NewProp_GroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSFlexMatchMakeStart_RequestData",
		sizeof(FELSSFlexMatchMakeStart_RequestData),
		alignof(FELSSFlexMatchMakeStart_RequestData),
		Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSFlexMatchMakeStart_RequestData"), sizeof(FELSSFlexMatchMakeStart_RequestData), Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSFlexMatchMakeStart_RequestData_Hash() { return 2780457170U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
