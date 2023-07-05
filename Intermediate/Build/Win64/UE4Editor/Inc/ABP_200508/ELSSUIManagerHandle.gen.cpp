// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUIManagerHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUIManagerHandle() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUIManagerHandle_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUIManagerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSUIManagerHandle::execIsLoadComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoadComplete();
		P_NATIVE_END;
	}
	void UELSSUIManagerHandle::StaticRegisterNativesUELSSUIManagerHandle()
	{
		UClass* Class = UELSSUIManagerHandle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoadComplete", &UELSSUIManagerHandle::execIsLoadComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics
	{
		struct ELSSUIManagerHandle_eventIsLoadComplete_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSUIManagerHandle_eventIsLoadComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSUIManagerHandle_eventIsLoadComplete_Parms), &Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUIManagerHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUIManagerHandle, nullptr, "IsLoadComplete", nullptr, nullptr, sizeof(ELSSUIManagerHandle_eventIsLoadComplete_Parms), Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSUIManagerHandle_NoRegister()
	{
		return UELSSUIManagerHandle::StaticClass();
	}
	struct Z_Construct_UClass_UELSSUIManagerHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftClassPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SoftClassPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSUIManagerHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSUIManagerHandle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSUIManagerHandle_IsLoadComplete, "IsLoadComplete" }, // 642693588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSUIManagerHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUIManagerHandle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerHandle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSUIManagerHandle_Statics::NewProp_SoftClassPtr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSUIManagerHandle" },
		{ "ModuleRelativePath", "Public/ELSSUIManagerHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UELSSUIManagerHandle_Statics::NewProp_SoftClassPtr = { "SoftClassPtr", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSUIManagerHandle, SoftClassPtr), Z_Construct_UClass_UELSSPanelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSUIManagerHandle_Statics::NewProp_SoftClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSUIManagerHandle_Statics::NewProp_SoftClassPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSUIManagerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSUIManagerHandle_Statics::NewProp_SoftClassPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSUIManagerHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSUIManagerHandle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSUIManagerHandle_Statics::ClassParams = {
		&UELSSUIManagerHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSUIManagerHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSUIManagerHandle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSUIManagerHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSUIManagerHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSUIManagerHandle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSUIManagerHandle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSUIManagerHandle, 2150139668);
	template<> ABP_200508_API UClass* StaticClass<UELSSUIManagerHandle>()
	{
		return UELSSUIManagerHandle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSUIManagerHandle(Z_Construct_UClass_UELSSUIManagerHandle, &UELSSUIManagerHandle::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSUIManagerHandle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSUIManagerHandle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
