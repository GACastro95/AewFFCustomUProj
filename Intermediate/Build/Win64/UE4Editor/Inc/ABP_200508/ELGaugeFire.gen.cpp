// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGaugeFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGaugeFire() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeFire_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeFire();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGaugeFire::execSetNativeParam)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_StartEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_StartEnd);
		P_NATIVE_END;
	}
	void UELGaugeFire::StaticRegisterNativesUELGaugeFire()
	{
		UClass* Class = UELGaugeFire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNativeParam", &UELGaugeFire::execSetNativeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics
	{
		struct ELGaugeFire_eventSetNativeParam_Parms
		{
			UWidgetAnimation* StartEnd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::NewProp_StartEnd = { "StartEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGaugeFire_eventSetNativeParam_Parms, StartEnd), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::NewProp_StartEnd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGaugeFire.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGaugeFire, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELGaugeFire_eventSetNativeParam_Parms), Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGaugeFire_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGaugeFire_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGaugeFire_NoRegister()
	{
		return UELGaugeFire::StaticClass();
	}
	struct Z_Construct_UClass_UELGaugeFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGaugeFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGaugeFire_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGaugeFire_SetNativeParam, "SetNativeParam" }, // 2350377731
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGaugeFire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGaugeFire.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGaugeFire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGaugeFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGaugeFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGaugeFire_Statics::ClassParams = {
		&UELGaugeFire::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGaugeFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGaugeFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGaugeFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGaugeFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGaugeFire, 2759209586);
	template<> ABP_200508_API UClass* StaticClass<UELGaugeFire>()
	{
		return UELGaugeFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGaugeFire(Z_Construct_UClass_UELGaugeFire, &UELGaugeFire::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGaugeFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGaugeFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
