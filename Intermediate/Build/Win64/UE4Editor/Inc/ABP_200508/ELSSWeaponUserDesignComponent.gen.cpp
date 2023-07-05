// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponUserDesignComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponUserDesignComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UELSSWeaponUserDesignComponent::StaticRegisterNativesUELSSWeaponUserDesignComponent()
	{
	}
	UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent_NoRegister()
	{
		return UELSSWeaponUserDesignComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymbolTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SymbolTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_Logo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial_Logo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeletalMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSSWeaponUserDesignComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserColor = { "UserColor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, UserColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserTexture = { "UserTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, UserTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_SymbolTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_SymbolTexture = { "SymbolTexture", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, SymbolTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_SymbolTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_SymbolTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Logo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Logo = { "DynamicMaterial_Logo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, DynamicMaterial_Logo), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Logo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Logo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Base_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Base = { "DynamicMaterial_Base", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, DynamicMaterial_Base), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_TargetSkeletalMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponUserDesignComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponUserDesignComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_TargetSkeletalMeshComponent = { "TargetSkeletalMeshComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWeaponUserDesignComponent, TargetSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_TargetSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_TargetSkeletalMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_UserTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_SymbolTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Logo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_DynamicMaterial_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::NewProp_TargetSkeletalMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWeaponUserDesignComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::ClassParams = {
		&UELSSWeaponUserDesignComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWeaponUserDesignComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWeaponUserDesignComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWeaponUserDesignComponent, 401498943);
	template<> ABP_200508_API UClass* StaticClass<UELSSWeaponUserDesignComponent>()
	{
		return UELSSWeaponUserDesignComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWeaponUserDesignComponent(Z_Construct_UClass_UELSSWeaponUserDesignComponent, &UELSSWeaponUserDesignComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWeaponUserDesignComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWeaponUserDesignComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
