// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELIngameTutorialDialogInputEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELIngameTutorialDialogInputEvent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameTutorialDialogInputEvent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELIngameTutorialDialogInputEvent();
	ABP_200508_API UClass* Z_Construct_UClass_UELInGameMenuInputEventBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELIngameTutorialDialogInputEvent::execOnClosedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClosedDisconnectedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELIngameTutorialDialogInputEvent::execOnOpenedDisconnectedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpenedDisconnectedDialog();
		P_NATIVE_END;
	}
	void UELIngameTutorialDialogInputEvent::StaticRegisterNativesUELIngameTutorialDialogInputEvent()
	{
		UClass* Class = UELIngameTutorialDialogInputEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClosedDisconnectedDialog", &UELIngameTutorialDialogInputEvent::execOnClosedDisconnectedDialog },
			{ "OnOpenedDisconnectedDialog", &UELIngameTutorialDialogInputEvent::execOnOpenedDisconnectedDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameTutorialDialogInputEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameTutorialDialogInputEvent, nullptr, "OnClosedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELIngameTutorialDialogInputEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELIngameTutorialDialogInputEvent, nullptr, "OnOpenedDisconnectedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELIngameTutorialDialogInputEvent_NoRegister()
	{
		return UELIngameTutorialDialogInputEvent::StaticClass();
	}
	struct Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELInGameMenuInputEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnClosedDisconnectedDialog, "OnClosedDisconnectedDialog" }, // 1672469937
		{ &Z_Construct_UFunction_UELIngameTutorialDialogInputEvent_OnOpenedDisconnectedDialog, "OnOpenedDisconnectedDialog" }, // 743513075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELIngameTutorialDialogInputEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELIngameTutorialDialogInputEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELIngameTutorialDialogInputEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::ClassParams = {
		&UELIngameTutorialDialogInputEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELIngameTutorialDialogInputEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELIngameTutorialDialogInputEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELIngameTutorialDialogInputEvent, 1244695424);
	template<> ABP_200508_API UClass* StaticClass<UELIngameTutorialDialogInputEvent>()
	{
		return UELIngameTutorialDialogInputEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELIngameTutorialDialogInputEvent(Z_Construct_UClass_UELIngameTutorialDialogInputEvent, &UELIngameTutorialDialogInputEvent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELIngameTutorialDialogInputEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELIngameTutorialDialogInputEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
