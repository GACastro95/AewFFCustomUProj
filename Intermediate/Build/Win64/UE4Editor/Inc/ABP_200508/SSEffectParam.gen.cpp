// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSEffectParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSEffectParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSEffectParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSEffectParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSEffectParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSEffectParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSEffectParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSEffectParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSEffectParam"), sizeof(FSSEffectParam), Get_Z_Construct_UScriptStruct_FSSEffectParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSEffectParam>()
{
	return FSSEffectParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSEffectParam(FSSEffectParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSEffectParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSEffectParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSEffectParam()
	{
		UScriptStruct::DeferCppStructOps<FSSEffectParam>(FName(TEXT("SSEffectParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSEffectParam;
	struct Z_Construct_UScriptStruct_FSSEffectParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttach_MetaData[];
#endif
		static void NewProp_IsAttach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SoundCue2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue3D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSEffectParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, EffectClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach_SetBit(void* Obj)
	{
		((FSSEffectParam*)Obj)->IsAttach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach = { "IsAttach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSEffectParam), &Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, AttachSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectOffset = { "EffectOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, EffectOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectRotation = { "EffectRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, EffectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectScale = { "EffectScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, EffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue2D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue2D = { "SoundCue2D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, SoundCue2D), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue3D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSEffectParam" },
		{ "ModuleRelativePath", "Public/SSEffectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue3D = { "SoundCue3D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSEffectParam, SoundCue3D), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue3D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSEffectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_IsAttach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_EffectScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSEffectParam_Statics::NewProp_SoundCue3D,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSEffectParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSEffectParam",
		sizeof(FSSEffectParam),
		alignof(FSSEffectParam),
		Z_Construct_UScriptStruct_FSSEffectParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSEffectParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSEffectParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSEffectParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSEffectParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSEffectParam"), sizeof(FSSEffectParam), Get_Z_Construct_UScriptStruct_FSSEffectParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSEffectParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSEffectParam_Hash() { return 577655522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
