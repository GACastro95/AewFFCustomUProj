// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGimmickJumpPad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGimmickJumpPad() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickJumpPad_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickJumpPad();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGimmickBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AELSSGimmickJumpPad::StaticRegisterNativesAELSSGimmickJumpPad()
	{
	}
	UClass* Z_Construct_UClass_AELSSGimmickJumpPad_NoRegister()
	{
		return AELSSGimmickJumpPad::StaticClass();
	}
	struct Z_Construct_UClass_AELSSGimmickJumpPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpPadMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpPadMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSGimmickJumpPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSGimmickBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickJumpPad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGimmickJumpPad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickJumpPad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSGimmickJumpPad_Statics::NewProp_JumpPadMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGimmickJumpPad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSGimmickJumpPad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSGimmickJumpPad_Statics::NewProp_JumpPadMeshComponent = { "JumpPadMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSGimmickJumpPad, JumpPadMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickJumpPad_Statics::NewProp_JumpPadMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickJumpPad_Statics::NewProp_JumpPadMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSGimmickJumpPad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSGimmickJumpPad_Statics::NewProp_JumpPadMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSGimmickJumpPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSGimmickJumpPad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSGimmickJumpPad_Statics::ClassParams = {
		&AELSSGimmickJumpPad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSGimmickJumpPad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickJumpPad_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSGimmickJumpPad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSGimmickJumpPad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSGimmickJumpPad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSGimmickJumpPad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSGimmickJumpPad, 424914496);
	template<> ABP_200508_API UClass* StaticClass<AELSSGimmickJumpPad>()
	{
		return AELSSGimmickJumpPad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSGimmickJumpPad(Z_Construct_UClass_AELSSGimmickJumpPad, &AELSSGimmickJumpPad::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSGimmickJumpPad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSGimmickJumpPad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
