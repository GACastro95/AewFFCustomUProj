// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileWeaponDecalInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileWeaponDecalInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUserProfileSortType();
// End Cross Module References

static_assert(std::is_polymorphic<FUserProfileWeaponDecalInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUserProfileWeaponDecalInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUserProfileWeaponDecalInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileWeaponDecalInfo"), sizeof(FUserProfileWeaponDecalInfo), Get_Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileWeaponDecalInfo>()
{
	return FUserProfileWeaponDecalInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileWeaponDecalInfo(FUserProfileWeaponDecalInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileWeaponDecalInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponDecalInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponDecalInfo()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileWeaponDecalInfo>(FName(TEXT("UserProfileWeaponDecalInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponDecalInfo;
	struct Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorChange_MetaData[];
#endif
		static void NewProp_ColorChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ColorChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NothingItem_MetaData[];
#endif
		static void NewProp_NothingItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NothingItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDecal_MetaData[];
#endif
		static void NewProp_DefaultDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkageUnlockableID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinkageUnlockableID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileWeaponDecalInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponDecalInfo, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponDecalInfo, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType = { "SortType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponDecalInfo, SortType), Z_Construct_UEnum_ABP_200508_EUserProfileSortType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange_SetBit(void* Obj)
	{
		((FUserProfileWeaponDecalInfo*)Obj)->ColorChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange = { "ColorChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileWeaponDecalInfo), &Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem_SetBit(void* Obj)
	{
		((FUserProfileWeaponDecalInfo*)Obj)->NothingItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem = { "NothingItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileWeaponDecalInfo), &Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal_SetBit(void* Obj)
	{
		((FUserProfileWeaponDecalInfo*)Obj)->DefaultDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal = { "DefaultDecal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileWeaponDecalInfo), &Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_LinkageUnlockableID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponDecalInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponDecalInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_LinkageUnlockableID = { "LinkageUnlockableID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponDecalInfo, LinkageUnlockableID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_LinkageUnlockableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_LinkageUnlockableID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_SortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_ColorChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_NothingItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_DefaultDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::NewProp_LinkageUnlockableID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UserProfileWeaponDecalInfo",
		sizeof(FUserProfileWeaponDecalInfo),
		alignof(FUserProfileWeaponDecalInfo),
		Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileWeaponDecalInfo"), sizeof(FUserProfileWeaponDecalInfo), Get_Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponDecalInfo_Hash() { return 1827930362U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
