// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSaveIconScreenExecutorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveIconScreenExecutorBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSaveIconScreenExecutorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSaveIconScreenExecutorBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSaveIconScreenExecutorBase::execOnEndScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndScreen_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSaveIconScreenExecutorBase::execOnStartScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartScreen_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELSaveIconScreenExecutorBase_GetShowMinimumTime = FName(TEXT("GetShowMinimumTime"));
	float UELSaveIconScreenExecutorBase::GetShowMinimumTime()
	{
		ELSaveIconScreenExecutorBase_eventGetShowMinimumTime_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSaveIconScreenExecutorBase_GetShowMinimumTime),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSaveIconScreenExecutorBase_OnEndScreen = FName(TEXT("OnEndScreen"));
	void UELSaveIconScreenExecutorBase::OnEndScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSaveIconScreenExecutorBase_OnEndScreen),NULL);
	}
	static FName NAME_UELSaveIconScreenExecutorBase_OnStartScreen = FName(TEXT("OnStartScreen"));
	void UELSaveIconScreenExecutorBase::OnStartScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSaveIconScreenExecutorBase_OnStartScreen),NULL);
	}
	void UELSaveIconScreenExecutorBase::StaticRegisterNativesUELSaveIconScreenExecutorBase()
	{
		UClass* Class = UELSaveIconScreenExecutorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndScreen", &UELSaveIconScreenExecutorBase::execOnEndScreen },
			{ "OnStartScreen", &UELSaveIconScreenExecutorBase::execOnStartScreen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSaveIconScreenExecutorBase_eventGetShowMinimumTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveIconScreenExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveIconScreenExecutorBase, nullptr, "GetShowMinimumTime", nullptr, nullptr, sizeof(ELSaveIconScreenExecutorBase_eventGetShowMinimumTime_Parms), Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveIconScreenExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveIconScreenExecutorBase, nullptr, "OnEndScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSaveIconScreenExecutorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSaveIconScreenExecutorBase, nullptr, "OnStartScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSaveIconScreenExecutorBase_NoRegister()
	{
		return UELSaveIconScreenExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSaveIconScreenExecutorBase_GetShowMinimumTime, "GetShowMinimumTime" }, // 2803146873
		{ &Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnEndScreen, "OnEndScreen" }, // 123294617
		{ &Z_Construct_UFunction_UELSaveIconScreenExecutorBase_OnStartScreen, "OnStartScreen" }, // 3751131748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSaveIconScreenExecutorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSaveIconScreenExecutorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSaveIconScreenExecutorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::ClassParams = {
		&UELSaveIconScreenExecutorBase::StaticClass,
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
		0x001002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSaveIconScreenExecutorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSaveIconScreenExecutorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSaveIconScreenExecutorBase, 552453603);
	template<> ABP_200508_API UClass* StaticClass<UELSaveIconScreenExecutorBase>()
	{
		return UELSaveIconScreenExecutorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSaveIconScreenExecutorBase(Z_Construct_UClass_UELSaveIconScreenExecutorBase, &UELSaveIconScreenExecutorBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSaveIconScreenExecutorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSaveIconScreenExecutorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
