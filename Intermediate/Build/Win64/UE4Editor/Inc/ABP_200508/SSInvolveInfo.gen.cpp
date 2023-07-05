// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSInvolveInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSInvolveInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSInvolveInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FSSInvolveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSInvolveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSInvolveInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSInvolveInfo"), sizeof(FSSInvolveInfo), Get_Z_Construct_UScriptStruct_FSSInvolveInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSInvolveInfo>()
{
	return FSSInvolveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSInvolveInfo(FSSInvolveInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSInvolveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSInvolveInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSInvolveInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSInvolveInfo>(FName(TEXT("SSInvolveInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSInvolveInfo;
	struct Z_Construct_UScriptStruct_FSSInvolveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSInvolveInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSInvolveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInvolveInfo" },
		{ "ModuleRelativePath", "Public/SSInvolveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackUser = { "AttackUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInvolveInfo, AttackUser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_CollisionOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInvolveInfo" },
		{ "ModuleRelativePath", "Public/SSInvolveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_CollisionOffset = { "CollisionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInvolveInfo, CollisionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_CollisionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_CollisionOffset_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors_Inner = { "AttackedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSInvolveInfo" },
		{ "ModuleRelativePath", "Public/SSInvolveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors = { "AttackedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSInvolveInfo, AttackedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_CollisionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::NewProp_AttackedActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSInvolveInfo",
		sizeof(FSSInvolveInfo),
		alignof(FSSInvolveInfo),
		Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSInvolveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSInvolveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSInvolveInfo"), sizeof(FSSInvolveInfo), Get_Z_Construct_UScriptStruct_FSSInvolveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSInvolveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSInvolveInfo_Hash() { return 1423987424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
