// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSystemRefereeMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSystemRefereeMove() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeMove();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStSystemRefereeMove>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSystemRefereeMove cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSystemRefereeMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSystemRefereeMove, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSystemRefereeMove"), sizeof(FStSystemRefereeMove), Get_Z_Construct_UScriptStruct_FStSystemRefereeMove_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSystemRefereeMove>()
{
	return FStSystemRefereeMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSystemRefereeMove(FStSystemRefereeMove::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSystemRefereeMove"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeMove
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeMove()
	{
		UScriptStruct::DeferCppStructOps<FStSystemRefereeMove>(FName(TEXT("StSystemRefereeMove")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSystemRefereeMove;
	struct Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Step_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Step_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Step_F;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Step_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Step_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_R_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walk_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_L_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walk_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Stand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSystemRefereeMove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk = { "Walk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Walk), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_R = { "Step_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Step_R), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_L = { "Step_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Step_L), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_F = { "Step_F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Step_F), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_F_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_B = { "Step_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Step_B), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_R = { "Walk_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Walk_R), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_L = { "Walk_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Walk_L), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Stand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSystemRefereeMove" },
		{ "ModuleRelativePath", "Public/StSystemRefereeMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Stand = { "Stand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSystemRefereeMove, Stand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Stand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Stand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_F,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Step_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Walk_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::NewProp_Stand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSystemRefereeMove",
		sizeof(FStSystemRefereeMove),
		alignof(FStSystemRefereeMove),
		Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSystemRefereeMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSystemRefereeMove"), sizeof(FStSystemRefereeMove), Get_Z_Construct_UScriptStruct_FStSystemRefereeMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSystemRefereeMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSystemRefereeMove_Hash() { return 2177848881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
