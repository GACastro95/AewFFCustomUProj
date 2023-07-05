// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPlayerBarrierInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPlayerBarrierInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPlayerBarrierInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FStPlayerBarrierInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPlayerBarrierInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPlayerBarrierInfo"), sizeof(FStPlayerBarrierInfo), Get_Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPlayerBarrierInfo>()
{
	return FStPlayerBarrierInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPlayerBarrierInfo(FStPlayerBarrierInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPlayerBarrierInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerBarrierInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerBarrierInfo()
	{
		UScriptStruct::DeferCppStructOps<FStPlayerBarrierInfo>(FName(TEXT("StPlayerBarrierInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerBarrierInfo;
	struct Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWeapon_MetaData[];
#endif
		static void NewProp_IsWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHead_MetaData[];
#endif
		static void NewProp_IsHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHand_MetaData[];
#endif
		static void NewProp_IsHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPlayerBarrierInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_Capsule_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerBarrierInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPlayerBarrierInfo, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerBarrierInfo" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPlayerBarrierInfo, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerBarrierInfo" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon_SetBit(void* Obj)
	{
		((FStPlayerBarrierInfo*)Obj)->IsWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon = { "IsWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPlayerBarrierInfo), &Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerBarrierInfo" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead_SetBit(void* Obj)
	{
		((FStPlayerBarrierInfo*)Obj)->IsHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead = { "IsHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPlayerBarrierInfo), &Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerBarrierInfo" },
		{ "ModuleRelativePath", "Public/StPlayerBarrierInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand_SetBit(void* Obj)
	{
		((FStPlayerBarrierInfo*)Obj)->IsHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand = { "IsHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPlayerBarrierInfo), &Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::NewProp_IsHand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"StPlayerBarrierInfo",
		sizeof(FStPlayerBarrierInfo),
		alignof(FStPlayerBarrierInfo),
		Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPlayerBarrierInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPlayerBarrierInfo"), sizeof(FStPlayerBarrierInfo), Get_Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPlayerBarrierInfo_Hash() { return 3402400047U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
