// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSNearInteractableObjectStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSNearInteractableObjectStatus() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSNearInteractableObjectStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSNearInteractableObjectStatus"), sizeof(FSSNearInteractableObjectStatus), Get_Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSNearInteractableObjectStatus>()
{
	return FSSNearInteractableObjectStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSNearInteractableObjectStatus(FSSNearInteractableObjectStatus::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSNearInteractableObjectStatus"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSNearInteractableObjectStatus
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSNearInteractableObjectStatus()
	{
		UScriptStruct::DeferCppStructOps<FSSNearInteractableObjectStatus>(FName(TEXT("SSNearInteractableObjectStatus")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSNearInteractableObjectStatus;
	struct Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSNearInteractableObjectStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSNearInteractableObjectStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearInteractableObjectStatus" },
		{ "ModuleRelativePath", "Public/SSNearInteractableObjectStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((FSSNearInteractableObjectStatus*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSNearInteractableObjectStatus), &Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearInteractableObjectStatus" },
		{ "ModuleRelativePath", "Public/SSNearInteractableObjectStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNearInteractableObjectStatus, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSNearInteractableObjectStatus",
		sizeof(FSSNearInteractableObjectStatus),
		alignof(FSSNearInteractableObjectStatus),
		Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSNearInteractableObjectStatus"), sizeof(FSSNearInteractableObjectStatus), Get_Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSNearInteractableObjectStatus_Hash() { return 663481044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
