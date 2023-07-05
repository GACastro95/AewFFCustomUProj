// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileWeaponPlacementInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileWeaponPlacementInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FUserProfileWeaponPlacementInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUserProfileWeaponPlacementInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUserProfileWeaponPlacementInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileWeaponPlacementInfo"), sizeof(FUserProfileWeaponPlacementInfo), Get_Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileWeaponPlacementInfo>()
{
	return FUserProfileWeaponPlacementInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileWeaponPlacementInfo(FUserProfileWeaponPlacementInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileWeaponPlacementInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponPlacementInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponPlacementInfo()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileWeaponPlacementInfo>(FName(TEXT("UserProfileWeaponPlacementInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileWeaponPlacementInfo;
	struct Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Memo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon_MetaData[];
#endif
		static void NewProp_DefaultWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSSWeapon_MetaData[];
#endif
		static void NewProp_IsSSWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSSWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileWeaponPlacementInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_WeaponID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponPlacementInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponPlacementInfo, WeaponID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_WeaponID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_WeaponID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponPlacementInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponPlacementInfo, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Memo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponPlacementInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon_SetBit(void* Obj)
	{
		((FUserProfileWeaponPlacementInfo*)Obj)->DefaultWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon = { "DefaultWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileWeaponPlacementInfo), &Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponPlacementInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon_SetBit(void* Obj)
	{
		((FUserProfileWeaponPlacementInfo*)Obj)->IsSSWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon = { "IsSSWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserProfileWeaponPlacementInfo), &Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileWeaponPlacementInfo" },
		{ "ModuleRelativePath", "Public/UserProfileWeaponPlacementInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileWeaponPlacementInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_WeaponID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Memo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_DefaultWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_IsSSWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UserProfileWeaponPlacementInfo",
		sizeof(FUserProfileWeaponPlacementInfo),
		alignof(FUserProfileWeaponPlacementInfo),
		Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileWeaponPlacementInfo"), sizeof(FUserProfileWeaponPlacementInfo), Get_Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileWeaponPlacementInfo_Hash() { return 76642851U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
