// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELCharacterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCharacterComponent() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELCharacterComponent_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELCharacterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCharacterComponent::execGetOwnerAsCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetOwnerAsCharacter();
		P_NATIVE_END;
	}
	void UELCharacterComponent::StaticRegisterNativesUELCharacterComponent()
	{
		UClass* Class = UELCharacterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwnerAsCharacter", &UELCharacterComponent::execGetOwnerAsCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics
	{
		struct ELCharacterComponent_eventGetOwnerAsCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCharacterComponent_eventGetOwnerAsCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCharacterComponent, nullptr, "GetOwnerAsCharacter", nullptr, nullptr, sizeof(ELCharacterComponent_eventGetOwnerAsCharacter_Parms), Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCharacterComponent_NoRegister()
	{
		return UELCharacterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELCharacterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCharacterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCharacterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCharacterComponent_GetOwnerAsCharacter, "GetOwnerAsCharacter" }, // 887540733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCharacterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELCharacterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCharacterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCharacterComponent" },
		{ "ModuleRelativePath", "Public/ELCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000202005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCharacterComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_CharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_CharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_OwnerRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCharacterComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCharacterComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_OwnerRoot = { "OwnerRoot", nullptr, (EPropertyFlags)0x002208000028200d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCharacterComponent, OwnerRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_OwnerRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_OwnerRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCharacterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_CharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCharacterComponent_Statics::NewProp_OwnerRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCharacterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCharacterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCharacterComponent_Statics::ClassParams = {
		&UELCharacterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCharacterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCharacterComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELCharacterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCharacterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCharacterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCharacterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCharacterComponent, 1784589673);
	template<> ELITE_CORE_API UClass* StaticClass<UELCharacterComponent>()
	{
		return UELCharacterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCharacterComponent(Z_Construct_UClass_UELCharacterComponent, &UELCharacterComponent::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELCharacterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCharacterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
