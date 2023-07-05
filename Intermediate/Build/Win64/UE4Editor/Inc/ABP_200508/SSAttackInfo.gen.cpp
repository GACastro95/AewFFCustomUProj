// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttackInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackHitDirMode();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSAttackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttackInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttackInfo"), sizeof(FSSAttackInfo), Get_Z_Construct_UScriptStruct_FSSAttackInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttackInfo>()
{
	return FSSAttackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttackInfo(FSSAttackInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSAttackInfo>(FName(TEXT("SSAttackInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackInfo;
	struct Z_Construct_UScriptStruct_FSSAttackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateHash;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveCommand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveCommand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitDirMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDirMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitDirMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequiredWeapon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Available_MetaData[];
#endif
		static void NewProp_Available_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Available;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMove_MetaData[];
#endif
		static void NewProp_WeaponMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeaponMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncAttack_MetaData[];
#endif
		static void NewProp_SyncAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SyncAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_StateHash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_StateHash = { "StateHash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, StateHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_StateHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_StateHash_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand = { "MoveCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, MoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode = { "HitDirMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, HitDirMode), Z_Construct_UEnum_ABP_200508_ESSAttackHitDirMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackParam = { "AttackParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, AttackParam), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_RequiredWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_RequiredWeapon = { "RequiredWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, RequiredWeapon), Z_Construct_UClass_AELSSWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_RequiredWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_RequiredWeapon_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors_Inner = { "AttackedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors = { "AttackedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackInfo, AttackedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available_SetBit(void* Obj)
	{
		((FSSAttackInfo*)Obj)->Available = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSAttackInfo), &Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove_SetBit(void* Obj)
	{
		((FSSAttackInfo*)Obj)->WeaponMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove = { "WeaponMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSAttackInfo), &Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackInfo" },
		{ "ModuleRelativePath", "Public/SSAttackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack_SetBit(void* Obj)
	{
		((FSSAttackInfo*)Obj)->SyncAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack = { "SyncAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSAttackInfo), &Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_StateHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_MoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_HitDirMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_RequiredWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_AttackedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_Available,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_WeaponMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackInfo_Statics::NewProp_SyncAttack,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSAttackInfo",
		sizeof(FSSAttackInfo),
		alignof(FSSAttackInfo),
		Z_Construct_UScriptStruct_FSSAttackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttackInfo"), sizeof(FSSAttackInfo), Get_Z_Construct_UScriptStruct_FSSAttackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttackInfo_Hash() { return 1921964889U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
