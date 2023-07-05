// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHorseAttackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHorseAttackInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHorseAttackInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSSHorseAttackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHorseAttackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHorseAttackInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHorseAttackInfo"), sizeof(FSSHorseAttackInfo), Get_Z_Construct_UScriptStruct_FSSHorseAttackInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHorseAttackInfo>()
{
	return FSSHorseAttackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHorseAttackInfo(FSSHorseAttackInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHorseAttackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHorseAttackInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHorseAttackInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSHorseAttackInfo>(FName(TEXT("SSHorseAttackInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHorseAttackInfo;
	struct Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackHitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHorseAttackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHorseAttackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_AttackHitId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHorseAttackInfo" },
		{ "ModuleRelativePath", "Public/SSHorseAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHorseAttackInfo, AttackHitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_AttackHitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_AttackHitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHorseAttackInfo" },
		{ "ModuleRelativePath", "Public/SSHorseAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHorseAttackInfo, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHorseAttackInfo" },
		{ "ModuleRelativePath", "Public/SSHorseAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHorseAttackInfo, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHorseAttackInfo" },
		{ "ModuleRelativePath", "Public/SSHorseAttackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHorseAttackInfo, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_RelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSHorseAttackInfo",
		sizeof(FSSHorseAttackInfo),
		alignof(FSSHorseAttackInfo),
		Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHorseAttackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHorseAttackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHorseAttackInfo"), sizeof(FSSHorseAttackInfo), Get_Z_Construct_UScriptStruct_FSSHorseAttackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHorseAttackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHorseAttackInfo_Hash() { return 1565293799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
