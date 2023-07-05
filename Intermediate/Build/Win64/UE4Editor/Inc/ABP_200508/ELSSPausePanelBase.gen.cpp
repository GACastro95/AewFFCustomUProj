// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPausePanelBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPausePanelBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPausePanelBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPausePanelBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSPanelEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSPausePanelBase::execOnCloseOptionMenuNative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseOptionMenuNative();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSPausePanelBase::execOnClosePauseMenuNative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosePauseMenuNative();
		P_NATIVE_END;
	}
	static FName NAME_UELSSPausePanelBase_AbortPauseWindow = FName(TEXT("AbortPauseWindow"));
	void UELSSPausePanelBase::AbortPauseWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPausePanelBase_AbortPauseWindow),NULL);
	}
	static FName NAME_UELSSPausePanelBase_ClosePauseWindow = FName(TEXT("ClosePauseWindow"));
	void UELSSPausePanelBase::ClosePauseWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPausePanelBase_ClosePauseWindow),NULL);
	}
	static FName NAME_UELSSPausePanelBase_IsPauseWindowShow = FName(TEXT("IsPauseWindowShow"));
	bool UELSSPausePanelBase::IsPauseWindowShow()
	{
		ELSSPausePanelBase_eventIsPauseWindowShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPausePanelBase_IsPauseWindowShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPausePanelBase_ShowPauseWindow = FName(TEXT("ShowPauseWindow"));
	void UELSSPausePanelBase::ShowPauseWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPausePanelBase_ShowPauseWindow),NULL);
	}
	static FName NAME_UELSSPausePanelBase_UpdateKeyConfig = FName(TEXT("UpdateKeyConfig"));
	void UELSSPausePanelBase::UpdateKeyConfig()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPausePanelBase_UpdateKeyConfig),NULL);
	}
	void UELSSPausePanelBase::StaticRegisterNativesUELSSPausePanelBase()
	{
		UClass* Class = UELSSPausePanelBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseOptionMenuNative", &UELSSPausePanelBase::execOnCloseOptionMenuNative },
			{ "OnClosePauseMenuNative", &UELSSPausePanelBase::execOnClosePauseMenuNative },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "AbortPauseWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "ClosePauseWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPausePanelBase_eventIsPauseWindowShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPausePanelBase_eventIsPauseWindowShow_Parms), &Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "IsPauseWindowShow", nullptr, nullptr, sizeof(ELSSPausePanelBase_eventIsPauseWindowShow_Parms), Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "OnCloseOptionMenuNative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "OnClosePauseMenuNative", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "ShowPauseWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPausePanelBase, nullptr, "UpdateKeyConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPausePanelBase_NoRegister()
	{
		return UELSSPausePanelBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPausePanelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClosePauseMenuEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosePauseMenuEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseOptionMenuEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseOptionMenuEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPausePanelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPausePanelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPausePanelBase_AbortPauseWindow, "AbortPauseWindow" }, // 155973186
		{ &Z_Construct_UFunction_UELSSPausePanelBase_ClosePauseWindow, "ClosePauseWindow" }, // 1863900692
		{ &Z_Construct_UFunction_UELSSPausePanelBase_IsPauseWindowShow, "IsPauseWindowShow" }, // 1594521478
		{ &Z_Construct_UFunction_UELSSPausePanelBase_OnCloseOptionMenuNative, "OnCloseOptionMenuNative" }, // 1092007259
		{ &Z_Construct_UFunction_UELSSPausePanelBase_OnClosePauseMenuNative, "OnClosePauseMenuNative" }, // 3410785992
		{ &Z_Construct_UFunction_UELSSPausePanelBase_ShowPauseWindow, "ShowPauseWindow" }, // 216607503
		{ &Z_Construct_UFunction_UELSSPausePanelBase_UpdateKeyConfig, "UpdateKeyConfig" }, // 1786766590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPausePanelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPausePanelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnClosePauseMenuEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPausePanelBase" },
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnClosePauseMenuEventDispatcher = { "OnClosePauseMenuEventDispatcher", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPausePanelBase, OnClosePauseMenuEventDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SSPanelEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnClosePauseMenuEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnClosePauseMenuEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnCloseOptionMenuEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSPausePanelBase" },
		{ "ModuleRelativePath", "Public/ELSSPausePanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnCloseOptionMenuEventDispatcher = { "OnCloseOptionMenuEventDispatcher", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSPausePanelBase, OnCloseOptionMenuEventDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SSPanelEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnCloseOptionMenuEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnCloseOptionMenuEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSPausePanelBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnClosePauseMenuEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSPausePanelBase_Statics::NewProp_OnCloseOptionMenuEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPausePanelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPausePanelBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPausePanelBase_Statics::ClassParams = {
		&UELSSPausePanelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSPausePanelBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPausePanelBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPausePanelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPausePanelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPausePanelBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPausePanelBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPausePanelBase, 1991249382);
	template<> ABP_200508_API UClass* StaticClass<UELSSPausePanelBase>()
	{
		return UELSSPausePanelBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPausePanelBase(Z_Construct_UClass_UELSSPausePanelBase, &UELSSPausePanelBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPausePanelBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPausePanelBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
