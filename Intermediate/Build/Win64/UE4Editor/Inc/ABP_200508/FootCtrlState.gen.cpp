// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/FootCtrlState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootCtrlState() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FFootCtrlState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FFootCtrlState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FFootCtrlState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootCtrlState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("FootCtrlState"), sizeof(FFootCtrlState), Get_Z_Construct_UScriptStruct_FFootCtrlState_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FFootCtrlState>()
{
	return FFootCtrlState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootCtrlState(FFootCtrlState::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("FootCtrlState"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlState
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlState()
	{
		UScriptStruct::DeferCppStructOps<FFootCtrlState>(FName(TEXT("FootCtrlState")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFFootCtrlState;
	struct Z_Construct_UScriptStruct_FFootCtrlState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheck_MetaData[];
#endif
		static void NewProp_bCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootCtrlState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlState" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck_SetBit(void* Obj)
	{
		((FFootCtrlState*)Obj)->bCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck = { "bCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootCtrlState), &Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlState" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FFootCtrlState*)Obj)->bHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFootCtrlState), &Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlState" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootCtrlState, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_PrevLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlState" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_PrevLocation = { "PrevLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootCtrlState, PrevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_PrevLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_PrevLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors_Inner = { "OverlappedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FootCtrlState" },
		{ "ModuleRelativePath", "Public/FootCtrlState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors = { "OverlappedActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootCtrlState, OverlappedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootCtrlState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_bHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_PrevLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootCtrlState_Statics::NewProp_OverlappedActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootCtrlState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"FootCtrlState",
		sizeof(FFootCtrlState),
		alignof(FFootCtrlState),
		Z_Construct_UScriptStruct_FFootCtrlState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootCtrlState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootCtrlState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootCtrlState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootCtrlState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootCtrlState"), sizeof(FFootCtrlState), Get_Z_Construct_UScriptStruct_FFootCtrlState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootCtrlState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootCtrlState_Hash() { return 2330910882U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
