// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMapPlayerInfoWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMapPlayerInfoWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMapPlayerInfoWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMapPlayerInfoWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execGetStrCareerMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStrCareerMoney();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execGetStrEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStrEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execGetStrMotivationLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStrMotivationLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execGetStrSkillPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStrSkillPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execIsInjury)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInjury();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMapPlayerInfoWidgetBase::execUpdateParameter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateParameter();
		P_NATIVE_END;
	}
	static FName NAME_UELMapPlayerInfoWidgetBase_UpdateDisplay = FName(TEXT("UpdateDisplay"));
	void UELMapPlayerInfoWidgetBase::UpdateDisplay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMapPlayerInfoWidgetBase_UpdateDisplay),NULL);
	}
	void UELMapPlayerInfoWidgetBase::StaticRegisterNativesUELMapPlayerInfoWidgetBase()
	{
		UClass* Class = UELMapPlayerInfoWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStrCareerMoney", &UELMapPlayerInfoWidgetBase::execGetStrCareerMoney },
			{ "GetStrEnergy", &UELMapPlayerInfoWidgetBase::execGetStrEnergy },
			{ "GetStrMotivationLevel", &UELMapPlayerInfoWidgetBase::execGetStrMotivationLevel },
			{ "GetStrSkillPoint", &UELMapPlayerInfoWidgetBase::execGetStrSkillPoint },
			{ "IsInjury", &UELMapPlayerInfoWidgetBase::execIsInjury },
			{ "UpdateParameter", &UELMapPlayerInfoWidgetBase::execUpdateParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics
	{
		struct ELMapPlayerInfoWidgetBase_eventGetStrCareerMoney_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMapPlayerInfoWidgetBase_eventGetStrCareerMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "GetStrCareerMoney", nullptr, nullptr, sizeof(ELMapPlayerInfoWidgetBase_eventGetStrCareerMoney_Parms), Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics
	{
		struct ELMapPlayerInfoWidgetBase_eventGetStrEnergy_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMapPlayerInfoWidgetBase_eventGetStrEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "GetStrEnergy", nullptr, nullptr, sizeof(ELMapPlayerInfoWidgetBase_eventGetStrEnergy_Parms), Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics
	{
		struct ELMapPlayerInfoWidgetBase_eventGetStrMotivationLevel_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMapPlayerInfoWidgetBase_eventGetStrMotivationLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "GetStrMotivationLevel", nullptr, nullptr, sizeof(ELMapPlayerInfoWidgetBase_eventGetStrMotivationLevel_Parms), Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics
	{
		struct ELMapPlayerInfoWidgetBase_eventGetStrSkillPoint_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMapPlayerInfoWidgetBase_eventGetStrSkillPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "GetStrSkillPoint", nullptr, nullptr, sizeof(ELMapPlayerInfoWidgetBase_eventGetStrSkillPoint_Parms), Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics
	{
		struct ELMapPlayerInfoWidgetBase_eventIsInjury_Parms
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
	void Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMapPlayerInfoWidgetBase_eventIsInjury_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMapPlayerInfoWidgetBase_eventIsInjury_Parms), &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "IsInjury", nullptr, nullptr, sizeof(ELMapPlayerInfoWidgetBase_eventIsInjury_Parms), Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "UpdateDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMapPlayerInfoWidgetBase, nullptr, "UpdateParameter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMapPlayerInfoWidgetBase_NoRegister()
	{
		return UELMapPlayerInfoWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrCareerMoney, "GetStrCareerMoney" }, // 2594267320
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrEnergy, "GetStrEnergy" }, // 2627572754
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrMotivationLevel, "GetStrMotivationLevel" }, // 299203914
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_GetStrSkillPoint, "GetStrSkillPoint" }, // 2957512924
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_IsInjury, "IsInjury" }, // 1937051514
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateDisplay, "UpdateDisplay" }, // 564986142
		{ &Z_Construct_UFunction_UELMapPlayerInfoWidgetBase_UpdateParameter, "UpdateParameter" }, // 1978133976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMapPlayerInfoWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMapPlayerInfoWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMapPlayerInfoWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::ClassParams = {
		&UELMapPlayerInfoWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMapPlayerInfoWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMapPlayerInfoWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMapPlayerInfoWidgetBase, 2549869002);
	template<> ABP_200508_API UClass* StaticClass<UELMapPlayerInfoWidgetBase>()
	{
		return UELMapPlayerInfoWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMapPlayerInfoWidgetBase(Z_Construct_UClass_UELMapPlayerInfoWidgetBase, &UELMapPlayerInfoWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMapPlayerInfoWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMapPlayerInfoWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
