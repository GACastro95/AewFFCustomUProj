// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/PartIKInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartIKInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPartIKInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FPartIKInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FPartIKInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartIKInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("PartIKInfo"), sizeof(FPartIKInfo), Get_Z_Construct_UScriptStruct_FPartIKInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FPartIKInfo>()
{
	return FPartIKInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartIKInfo(FPartIKInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("PartIKInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFPartIKInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFPartIKInfo()
	{
		UScriptStruct::DeferCppStructOps<FPartIKInfo>(FName(TEXT("PartIKInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFPartIKInfo;
	struct Z_Construct_UScriptStruct_FPartIKInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttachTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartIKInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PartIKInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartIKInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartIKInfo" },
		{ "ModuleRelativePath", "Public/PartIKInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTarget = { "AttachTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartIKInfo, AttachTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartIKInfo" },
		{ "ModuleRelativePath", "Public/PartIKInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTime = { "AttachTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartIKInfo, AttachTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PartIKInfo" },
		{ "ModuleRelativePath", "Public/PartIKInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachLocation = { "AttachLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartIKInfo, AttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartIKInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartIKInfo_Statics::NewProp_AttachLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartIKInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"PartIKInfo",
		sizeof(FPartIKInfo),
		alignof(FPartIKInfo),
		Z_Construct_UScriptStruct_FPartIKInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartIKInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartIKInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartIKInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartIKInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartIKInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartIKInfo"), sizeof(FPartIKInfo), Get_Z_Construct_UScriptStruct_FPartIKInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartIKInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartIKInfo_Hash() { return 965892091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
