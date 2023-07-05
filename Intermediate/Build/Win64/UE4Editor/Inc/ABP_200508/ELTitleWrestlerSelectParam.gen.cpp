// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTitleWrestlerSelectParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleWrestlerSelectParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
// End Cross Module References
class UScriptStruct* FELTitleWrestlerSelectParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELTitleWrestlerSelectParam"), sizeof(FELTitleWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELTitleWrestlerSelectParam>()
{
	return FELTitleWrestlerSelectParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELTitleWrestlerSelectParam(FELTitleWrestlerSelectParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELTitleWrestlerSelectParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleWrestlerSelectParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleWrestlerSelectParam()
	{
		UScriptStruct::DeferCppStructOps<FELTitleWrestlerSelectParam>(FName(TEXT("ELTitleWrestlerSelectParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELTitleWrestlerSelectParam;
	struct Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstumeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConstumeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static void NewProp_Manager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static void NewProp_AI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AI;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BeltList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELTitleWrestlerSelectParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleWrestlerSelectParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerUID = { "WrestlerUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleWrestlerSelectParam, WrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_ConstumeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_ConstumeId = { "ConstumeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleWrestlerSelectParam, ConstumeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_ConstumeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_ConstumeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_TeamNo = { "TeamNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleWrestlerSelectParam, TeamNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager_SetBit(void* Obj)
	{
		((FELTitleWrestlerSelectParam*)Obj)->Manager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELTitleWrestlerSelectParam), &Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI_SetBit(void* Obj)
	{
		((FELTitleWrestlerSelectParam*)Obj)->AI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELTitleWrestlerSelectParam), &Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_Inner = { "BeltList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/ELTitleWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList = { "BeltList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleWrestlerSelectParam, BeltList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_WrestlerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_ConstumeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_TeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::NewProp_BeltList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELTitleWrestlerSelectParam",
		sizeof(FELTitleWrestlerSelectParam),
		alignof(FELTitleWrestlerSelectParam),
		Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELTitleWrestlerSelectParam"), sizeof(FELTitleWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELTitleWrestlerSelectParam_Hash() { return 3339220867U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
