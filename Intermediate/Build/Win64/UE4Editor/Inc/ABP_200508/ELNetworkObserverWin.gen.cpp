// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetworkObserverWin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetworkObserverWin() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverWin_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverWin();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELNetworkObserverWin::execOnNetworkInitialized)
	{
		P_GET_UBOOL(Z_Param_Initialized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNetworkInitialized(Z_Param_Initialized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverWin::execOnResume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverWin::execOnSuspend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSuspend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverWin::execOnWindowFocusChanged)
	{
		P_GET_UBOOL(Z_Param__bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWindowFocusChanged(Z_Param__bIsFocused);
		P_NATIVE_END;
	}
	void UELNetworkObserverWin::StaticRegisterNativesUELNetworkObserverWin()
	{
		UClass* Class = UELNetworkObserverWin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNetworkInitialized", &UELNetworkObserverWin::execOnNetworkInitialized },
			{ "OnResume", &UELNetworkObserverWin::execOnResume },
			{ "OnSuspend", &UELNetworkObserverWin::execOnSuspend },
			{ "OnWindowFocusChanged", &UELNetworkObserverWin::execOnWindowFocusChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics
	{
		struct ELNetworkObserverWin_eventOnNetworkInitialized_Parms
		{
			bool Initialized;
		};
		static void NewProp_Initialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Initialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::NewProp_Initialized_SetBit(void* Obj)
	{
		((ELNetworkObserverWin_eventOnNetworkInitialized_Parms*)Obj)->Initialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::NewProp_Initialized = { "Initialized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkObserverWin_eventOnNetworkInitialized_Parms), &Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::NewProp_Initialized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::NewProp_Initialized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverWin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverWin, nullptr, "OnNetworkInitialized", nullptr, nullptr, sizeof(ELNetworkObserverWin_eventOnNetworkInitialized_Parms), Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverWin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverWin, nullptr, "OnResume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverWin_OnResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverWin_OnResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverWin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverWin, nullptr, "OnSuspend", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics
	{
		struct ELNetworkObserverWin_eventOnWindowFocusChanged_Parms
		{
			bool _bIsFocused;
		};
		static void NewProp__bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::NewProp__bIsFocused_SetBit(void* Obj)
	{
		((ELNetworkObserverWin_eventOnWindowFocusChanged_Parms*)Obj)->_bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::NewProp__bIsFocused = { "_bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkObserverWin_eventOnWindowFocusChanged_Parms), &Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::NewProp__bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::NewProp__bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverWin.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverWin, nullptr, "OnWindowFocusChanged", nullptr, nullptr, sizeof(ELNetworkObserverWin_eventOnWindowFocusChanged_Parms), Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELNetworkObserverWin_NoRegister()
	{
		return UELNetworkObserverWin::StaticClass();
	}
	struct Z_Construct_UClass_UELNetworkObserverWin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetworkObserverWin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELNetworkObserverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELNetworkObserverWin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELNetworkObserverWin_OnNetworkInitialized, "OnNetworkInitialized" }, // 1487743593
		{ &Z_Construct_UFunction_UELNetworkObserverWin_OnResume, "OnResume" }, // 1789806578
		{ &Z_Construct_UFunction_UELNetworkObserverWin_OnSuspend, "OnSuspend" }, // 263108036
		{ &Z_Construct_UFunction_UELNetworkObserverWin_OnWindowFocusChanged, "OnWindowFocusChanged" }, // 2887756370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverWin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetworkObserverWin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverWin.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetworkObserverWin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNetworkObserverWin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetworkObserverWin_Statics::ClassParams = {
		&UELNetworkObserverWin::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverWin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverWin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetworkObserverWin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetworkObserverWin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetworkObserverWin, 216216583);
	template<> ABP_200508_API UClass* StaticClass<UELNetworkObserverWin>()
	{
		return UELNetworkObserverWin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetworkObserverWin(Z_Construct_UClass_UELNetworkObserverWin, &UELNetworkObserverWin::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetworkObserverWin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetworkObserverWin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
