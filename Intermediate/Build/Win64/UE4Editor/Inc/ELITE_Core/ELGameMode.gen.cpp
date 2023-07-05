// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameMode() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_AELGameMode_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_AELGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELGameMode::execToggleGlobalInvalidation)
	{
		P_GET_UBOOL(Z_Param_bNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleGlobalInvalidation(Z_Param_bNewState);
		P_NATIVE_END;
	}
	static FName NAME_AELGameMode_GetPauseMenuManagerActor = FName(TEXT("GetPauseMenuManagerActor"));
	AActor* AELGameMode::GetPauseMenuManagerActor() const
	{
		ELGameMode_eventGetPauseMenuManagerActor_Parms Parms;
		const_cast<AELGameMode*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELGameMode_GetPauseMenuManagerActor),&Parms);
		return Parms.ReturnValue;
	}
	void AELGameMode::StaticRegisterNativesAELGameMode()
	{
		UClass* Class = AELGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleGlobalInvalidation", &AELGameMode::execToggleGlobalInvalidation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameMode_eventGetPauseMenuManagerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameMode, nullptr, "GetPauseMenuManagerActor", nullptr, nullptr, sizeof(ELGameMode_eventGetPauseMenuManagerActor_Parms), Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics
	{
		struct ELGameMode_eventToggleGlobalInvalidation_Parms
		{
			bool bNewState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewState_MetaData[];
#endif
		static void NewProp_bNewState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState_SetBit(void* Obj)
	{
		((ELGameMode_eventToggleGlobalInvalidation_Parms*)Obj)->bNewState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState = { "bNewState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameMode_eventToggleGlobalInvalidation_Parms), &Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::NewProp_bNewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELGameMode, nullptr, "ToggleGlobalInvalidation", nullptr, nullptr, sizeof(ELGameMode_eventToggleGlobalInvalidation_Parms), Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELGameMode_NoRegister()
	{
		return AELGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AELGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELGameMode_GetPauseMenuManagerActor, "GetPauseMenuManagerActor" }, // 3105619808
		{ &Z_Construct_UFunction_AELGameMode_ToggleGlobalInvalidation, "ToggleGlobalInvalidation" }, // 2318526332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELGameMode_Statics::ClassParams = {
		&AELGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AELGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELGameMode, 2567409563);
	template<> ELITE_CORE_API UClass* StaticClass<AELGameMode>()
	{
		return AELGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELGameMode(Z_Construct_UClass_AELGameMode, &AELGameMode::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("AELGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
