// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELActivity_InitInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELActivity_InitInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELActivity_InitInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELActivity_InitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELActivity_InitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELActivity_InitInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELActivity_InitInfo"), sizeof(FELActivity_InitInfo), Get_Z_Construct_UScriptStruct_FELActivity_InitInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELActivity_InitInfo>()
{
	return FELActivity_InitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELActivity_InitInfo(FELActivity_InitInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELActivity_InitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_InitInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_InitInfo()
	{
		UScriptStruct::DeferCppStructOps<FELActivity_InitInfo>(FName(TEXT("ELActivity_InitInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELActivity_InitInfo;
	struct Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActivityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeamActivity_MetaData[];
#endif
		static void NewProp_bTeamActivity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeamActivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCasino_MetaData[];
#endif
		static void NewProp_bCasino_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCasino;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ComName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELActivity_InitInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELActivity_InitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ActivityId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_InitInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_InitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ActivityId = { "ActivityId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELActivity_InitInfo, ActivityId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ActivityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ActivityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_InitInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_InitInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity_SetBit(void* Obj)
	{
		((FELActivity_InitInfo*)Obj)->bTeamActivity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity = { "bTeamActivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELActivity_InitInfo), &Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_InitInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_InitInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino_SetBit(void* Obj)
	{
		((FELActivity_InitInfo*)Obj)->bCasino = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino = { "bCasino", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELActivity_InitInfo), &Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ComName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELActivity_InitInfo" },
		{ "ModuleRelativePath", "Public/ELActivity_InitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ComName = { "ComName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELActivity_InitInfo, ComName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ComName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ComName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ActivityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bTeamActivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_bCasino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::NewProp_ComName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELActivity_InitInfo",
		sizeof(FELActivity_InitInfo),
		alignof(FELActivity_InitInfo),
		Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELActivity_InitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELActivity_InitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELActivity_InitInfo"), sizeof(FELActivity_InitInfo), Get_Z_Construct_UScriptStruct_FELActivity_InitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELActivity_InitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELActivity_InitInfo_Hash() { return 352595929U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
