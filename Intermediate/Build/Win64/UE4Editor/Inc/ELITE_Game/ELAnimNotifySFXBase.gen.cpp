// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELAnimNotifySFXBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifySFXBase() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimNotifySFXBase_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimNotifySFXBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FStSoundNaviAnimData();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimNotifySFXBase::execGetNaviMontageData_N)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_STRUCT_REF(FStSoundNaviAnimData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNaviMontageData_N(Z_Param_Animation,Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void UELAnimNotifySFXBase::StaticRegisterNativesUELAnimNotifySFXBase()
	{
		UClass* Class = UELAnimNotifySFXBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNaviMontageData_N", &UELAnimNotifySFXBase::execGetNaviMontageData_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics
	{
		struct ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms
		{
			const UAnimSequenceBase* Animation;
			FStSoundNaviAnimData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms, Data), Z_Construct_UScriptStruct_FStSoundNaviAnimData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms), &Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimNotifySFXBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimNotifySFXBase, nullptr, "GetNaviMontageData_N", nullptr, nullptr, sizeof(ELAnimNotifySFXBase_eventGetNaviMontageData_N_Parms), Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimNotifySFXBase_NoRegister()
	{
		return UELAnimNotifySFXBase::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifySFXBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifySFXBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimNotifySFXBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimNotifySFXBase_GetNaviMontageData_N, "GetNaviMontageData_N" }, // 2919266265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifySFXBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifySFXBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifySFXBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifySFXBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifySFXBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifySFXBase_Statics::ClassParams = {
		&UELAnimNotifySFXBase::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifySFXBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifySFXBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifySFXBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifySFXBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifySFXBase, 484634418);
	template<> ELITE_GAME_API UClass* StaticClass<UELAnimNotifySFXBase>()
	{
		return UELAnimNotifySFXBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifySFXBase(Z_Construct_UClass_UELAnimNotifySFXBase, &UELAnimNotifySFXBase::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELAnimNotifySFXBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifySFXBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
