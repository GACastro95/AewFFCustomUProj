// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/SaveData_QuotaInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_QuotaInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_QuotaInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FSaveData_QuotaInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveData_QuotaInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("SaveData_QuotaInfo"), sizeof(FSaveData_QuotaInfo), Get_Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FSaveData_QuotaInfo>()
{
	return FSaveData_QuotaInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveData_QuotaInfo(FSaveData_QuotaInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("SaveData_QuotaInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFSaveData_QuotaInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFSaveData_QuotaInfo()
	{
		UScriptStruct::DeferCppStructOps<FSaveData_QuotaInfo>(FName(TEXT("SaveData_QuotaInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFSaveData_QuotaInfo;
	struct Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuotaSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QuotaSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalUsedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalUsedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllocatableSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllocatableSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidQuotaSize_MetaData[];
#endif
		static void NewProp_ValidQuotaSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidQuotaSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidTotalUsedSize_MetaData[];
#endif
		static void NewProp_ValidTotalUsedSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidTotalUsedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidRemainSize_MetaData[];
#endif
		static void NewProp_ValidRemainSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidRemainSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidAllocatableSize_MetaData[];
#endif
		static void NewProp_ValidAllocatableSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidAllocatableSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveData_QuotaInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_QuotaSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_QuotaSize = { "QuotaSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_QuotaInfo, QuotaSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_QuotaSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_QuotaSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_TotalUsedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_TotalUsedSize = { "TotalUsedSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_QuotaInfo, TotalUsedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_TotalUsedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_TotalUsedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_RemainSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_RemainSize = { "RemainSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_QuotaInfo, RemainSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_RemainSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_RemainSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_AllocatableSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_AllocatableSize = { "AllocatableSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveData_QuotaInfo, AllocatableSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_AllocatableSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_AllocatableSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize_SetBit(void* Obj)
	{
		((FSaveData_QuotaInfo*)Obj)->ValidQuotaSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize = { "ValidQuotaSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveData_QuotaInfo), &Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize_SetBit(void* Obj)
	{
		((FSaveData_QuotaInfo*)Obj)->ValidTotalUsedSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize = { "ValidTotalUsedSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveData_QuotaInfo), &Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize_SetBit(void* Obj)
	{
		((FSaveData_QuotaInfo*)Obj)->ValidRemainSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize = { "ValidRemainSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveData_QuotaInfo), &Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_QuotaInfo" },
		{ "ModuleRelativePath", "Public/SaveData_QuotaInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize_SetBit(void* Obj)
	{
		((FSaveData_QuotaInfo*)Obj)->ValidAllocatableSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize = { "ValidAllocatableSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSaveData_QuotaInfo), &Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_QuotaSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_TotalUsedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_RemainSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_AllocatableSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidQuotaSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidTotalUsedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidRemainSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::NewProp_ValidAllocatableSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"SaveData_QuotaInfo",
		sizeof(FSaveData_QuotaInfo),
		alignof(FSaveData_QuotaInfo),
		Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveData_QuotaInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveData_QuotaInfo"), sizeof(FSaveData_QuotaInfo), Get_Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveData_QuotaInfo_Hash() { return 334190744U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
