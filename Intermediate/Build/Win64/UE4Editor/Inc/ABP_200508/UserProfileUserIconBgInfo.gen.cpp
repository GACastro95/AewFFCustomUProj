// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileUserIconBgInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileUserIconBgInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUserProfileSortType();
// End Cross Module References

static_assert(std::is_polymorphic<FUserProfileUserIconBgInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUserProfileUserIconBgInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUserProfileUserIconBgInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileUserIconBgInfo"), sizeof(FUserProfileUserIconBgInfo), Get_Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileUserIconBgInfo>()
{
	return FUserProfileUserIconBgInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileUserIconBgInfo(FUserProfileUserIconBgInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileUserIconBgInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileUserIconBgInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileUserIconBgInfo()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileUserIconBgInfo>(FName(TEXT("UserProfileUserIconBgInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileUserIconBgInfo;
	struct Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultIcon_MetaData[];
#endif
		static void NewProp_DefaultIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinkageUnlockableID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinkageUnlockableID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileUserIconBgInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileUserIconBgInfo, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileUserIconBgInfo, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType = { "SortType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileUserIconBgInfo, SortType), Z_Construct_UEnum_ABP_200508_EUserProfileSortType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange_SetBit(void* Obj)
	{
		((FUserProfileUserIconBgInfo*)Obj)->ColorChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange = { "ColorChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileUserIconBgInfo), &Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon_SetBit(void* Obj)
	{
		((FUserProfileUserIconBgInfo*)Obj)->DefaultIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon = { "DefaultIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileUserIconBgInfo), &Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_LinkageUnlockableID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileUserIconBgInfo" },
		{ "ModuleRelativePath", "Public/UserProfileUserIconBgInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_LinkageUnlockableID = { "LinkageUnlockableID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileUserIconBgInfo, LinkageUnlockableID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_LinkageUnlockableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_LinkageUnlockableID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_SortType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_ColorChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_DefaultIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::NewProp_LinkageUnlockableID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UserProfileUserIconBgInfo",
		sizeof(FUserProfileUserIconBgInfo),
		alignof(FUserProfileUserIconBgInfo),
		Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileUserIconBgInfo"), sizeof(FUserProfileUserIconBgInfo), Get_Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileUserIconBgInfo_Hash() { return 4152966966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
