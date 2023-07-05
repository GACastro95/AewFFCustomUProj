// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELBeltParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELBeltParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELBeltParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachBeltAssets();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition();
// End Cross Module References

static_assert(std::is_polymorphic<FELBeltParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELBeltParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELBeltParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELBeltParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELBeltParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELBeltParam"), sizeof(FELBeltParam), Get_Z_Construct_UScriptStruct_FELBeltParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELBeltParam>()
{
	return FELBeltParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELBeltParam(FELBeltParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELBeltParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELBeltParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELBeltParam()
	{
		UScriptStruct::DeferCppStructOps<FELBeltParam>(FName(TEXT("ELBeltParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELBeltParam;
	struct Z_Construct_UScriptStruct_FELBeltParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Belt_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagBelt_MetaData[];
#endif
		static void NewProp_TagBelt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TagBelt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Man_MetaData[];
#endif
		static void NewProp_Man_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Man;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Woman_MetaData[];
#endif
		static void NewProp_Woman_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Woman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultHolder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultHolder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultHolderMember_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHolderMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultHolderMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefendCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefendCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeltAssetList_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeltAssetList_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BeltAssetList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BeltAssetList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELBeltParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELBeltParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt_SetBit(void* Obj)
	{
		((FELBeltParam*)Obj)->TagBelt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt = { "TagBelt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELBeltParam), &Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man_SetBit(void* Obj)
	{
		((FELBeltParam*)Obj)->Man = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man = { "Man", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELBeltParam), &Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman_SetBit(void* Obj)
	{
		((FELBeltParam*)Obj)->Woman = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman = { "Woman", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELBeltParam), &Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder = { "DefaultHolder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, DefaultHolder), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember = { "DefaultHolderMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, DefaultHolderMember), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Year_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Month_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Day_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefendCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefendCount = { "DefendCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, DefendCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefendCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefendCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, WeaponID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_WeaponID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_ValueProp = { "BeltAssetList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELAttachBeltAssets, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_Key_KeyProp = { "BeltAssetList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELBeltParam" },
		{ "ModuleRelativePath", "Public/ELBeltParam.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList = { "BeltAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELBeltParam, BeltAssetList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELBeltParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_TagBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Man,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Woman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefaultHolderMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Year,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_Day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_DefendCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_ThumbnailTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELBeltParam_Statics::NewProp_BeltAssetList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELBeltParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELBeltParam",
		sizeof(FELBeltParam),
		alignof(FELBeltParam),
		Z_Construct_UScriptStruct_FELBeltParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELBeltParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELBeltParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELBeltParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELBeltParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELBeltParam"), sizeof(FELBeltParam), Get_Z_Construct_UScriptStruct_FELBeltParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELBeltParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELBeltParam_Hash() { return 3065562892U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
