// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerPropAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerPropAnimInstance() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerPropAnimInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerPropAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerPropAnimInstance::execInitializeVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPropAnimInstance::execRequestAnimation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAnimation(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerPropAnimInstance::execUpdateVariables)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVariables(Z_Param_fDeltaTime);
		P_NATIVE_END;
	}
	void UELCareerPropAnimInstance::StaticRegisterNativesUELCareerPropAnimInstance()
	{
		UClass* Class = UELCareerPropAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeVariables", &UELCareerPropAnimInstance::execInitializeVariables },
			{ "RequestAnimation", &UELCareerPropAnimInstance::execRequestAnimation },
			{ "UpdateVariables", &UELCareerPropAnimInstance::execUpdateVariables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPropAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPropAnimInstance, nullptr, "InitializeVariables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics
	{
		struct ELCareerPropAnimInstance_eventRequestAnimation_Parms
		{
			FString Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPropAnimInstance_eventRequestAnimation_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPropAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPropAnimInstance, nullptr, "RequestAnimation", nullptr, nullptr, sizeof(ELCareerPropAnimInstance_eventRequestAnimation_Parms), Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics
	{
		struct ELCareerPropAnimInstance_eventUpdateVariables_Parms
		{
			float fDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::NewProp_fDeltaTime = { "fDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerPropAnimInstance_eventUpdateVariables_Parms, fDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::NewProp_fDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerPropAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerPropAnimInstance, nullptr, "UpdateVariables", nullptr, nullptr, sizeof(ELCareerPropAnimInstance_eventUpdateVariables_Parms), Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerPropAnimInstance_NoRegister()
	{
		return UELCareerPropAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerPropAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerPropAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerPropAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerPropAnimInstance_InitializeVariables, "InitializeVariables" }, // 924430270
		{ &Z_Construct_UFunction_UELCareerPropAnimInstance_RequestAnimation, "RequestAnimation" }, // 4208783674
		{ &Z_Construct_UFunction_UELCareerPropAnimInstance_UpdateVariables, "UpdateVariables" }, // 3655610408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerPropAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELCareerPropAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerPropAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerPropAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerPropAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerPropAnimInstance_Statics::ClassParams = {
		&UELCareerPropAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerPropAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerPropAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerPropAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerPropAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerPropAnimInstance, 3993832419);
	template<> ABP_200508_API UClass* StaticClass<UELCareerPropAnimInstance>()
	{
		return UELCareerPropAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerPropAnimInstance(Z_Construct_UClass_UELCareerPropAnimInstance, &UELCareerPropAnimInstance::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerPropAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerPropAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
