// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELVictoryCutsceneTransformAndAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELVictoryCutsceneTransformAndAnimation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FELVictoryCutsceneTransformAndAnimation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELVictoryCutsceneTransformAndAnimation"), sizeof(FELVictoryCutsceneTransformAndAnimation), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELVictoryCutsceneTransformAndAnimation>()
{
	return FELVictoryCutsceneTransformAndAnimation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation(FELVictoryCutsceneTransformAndAnimation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELVictoryCutsceneTransformAndAnimation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneTransformAndAnimation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneTransformAndAnimation()
	{
		UScriptStruct::DeferCppStructOps<FELVictoryCutsceneTransformAndAnimation>(FName(TEXT("ELVictoryCutsceneTransformAndAnimation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELVictoryCutsceneTransformAndAnimation;
	struct Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneTransformAndAnimation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELVictoryCutsceneTransformAndAnimation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneTransformAndAnimation" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneTransformAndAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneTransformAndAnimation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneTransformAndAnimation" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneTransformAndAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneTransformAndAnimation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELVictoryCutsceneTransformAndAnimation" },
		{ "ModuleRelativePath", "Public/ELVictoryCutsceneTransformAndAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELVictoryCutsceneTransformAndAnimation, Animation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELVictoryCutsceneTransformAndAnimation",
		sizeof(FELVictoryCutsceneTransformAndAnimation),
		alignof(FELVictoryCutsceneTransformAndAnimation),
		Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELVictoryCutsceneTransformAndAnimation"), sizeof(FELVictoryCutsceneTransformAndAnimation), Get_Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELVictoryCutsceneTransformAndAnimation_Hash() { return 1009424210U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
