// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTmpJukeboxSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTmpJukeboxSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTmpJukeboxSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELTmpJukeboxSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELTmpJukeboxSaveData"), sizeof(FELTmpJukeboxSaveData), Get_Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELTmpJukeboxSaveData>()
{
	return FELTmpJukeboxSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELTmpJukeboxSaveData(FELTmpJukeboxSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELTmpJukeboxSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELTmpJukeboxSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELTmpJukeboxSaveData()
	{
		UScriptStruct::DeferCppStructOps<FELTmpJukeboxSaveData>(FName(TEXT("ELTmpJukeboxSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELTmpJukeboxSaveData;
	struct Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sEnableJukeBoxArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sEnableJukeBoxArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sJukeBoxPlayedListArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sJukeBoxPlayedListArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sJukeBoxPlaylistSortNumArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bRandomPlayback_MetaData[];
#endif
		static void NewProp_m_bRandomPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bRandomPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bCreateSavedata_MetaData[];
#endif
		static void NewProp_m_bCreateSavedata_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bCreateSavedata;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELTmpJukeboxSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sEnableJukeBoxArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTmpJukeboxSaveData" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sEnableJukeBoxArray = { "m_sEnableJukeBoxArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sEnableJukeBoxArray, FELTmpJukeboxSaveData), STRUCT_OFFSET(FELTmpJukeboxSaveData, m_sEnableJukeBoxArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sEnableJukeBoxArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sEnableJukeBoxArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTmpJukeboxSaveData" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlayedListArray = { "m_sJukeBoxPlayedListArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sJukeBoxPlayedListArray, FELTmpJukeboxSaveData), STRUCT_OFFSET(FELTmpJukeboxSaveData, m_sJukeBoxPlayedListArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlayedListArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTmpJukeboxSaveData" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray = { "m_sJukeBoxPlaylistSortNumArray", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(m_sJukeBoxPlaylistSortNumArray, FELTmpJukeboxSaveData), STRUCT_OFFSET(FELTmpJukeboxSaveData, m_sJukeBoxPlaylistSortNumArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTmpJukeboxSaveData" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback_SetBit(void* Obj)
	{
		((FELTmpJukeboxSaveData*)Obj)->m_bRandomPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback = { "m_bRandomPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELTmpJukeboxSaveData), &Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTmpJukeboxSaveData" },
		{ "ModuleRelativePath", "Public/ELTmpJukeboxSaveData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata_SetBit(void* Obj)
	{
		((FELTmpJukeboxSaveData*)Obj)->m_bCreateSavedata = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata = { "m_bCreateSavedata", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELTmpJukeboxSaveData), &Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sEnableJukeBoxArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlayedListArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_sJukeBoxPlaylistSortNumArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bRandomPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::NewProp_m_bCreateSavedata,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELTmpJukeboxSaveData",
		sizeof(FELTmpJukeboxSaveData),
		alignof(FELTmpJukeboxSaveData),
		Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELTmpJukeboxSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELTmpJukeboxSaveData"), sizeof(FELTmpJukeboxSaveData), Get_Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELTmpJukeboxSaveData_Hash() { return 4131251388U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
