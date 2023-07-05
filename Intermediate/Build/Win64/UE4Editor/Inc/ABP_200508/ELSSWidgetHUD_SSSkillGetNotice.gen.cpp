// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_SSSkillGetNotice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_SSSkillGetNotice() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_SSSkillGetNotice::execPlayIn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSkillCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_HeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayIn(Z_Param_InSkillCategory,Z_Param_HeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSSkillGetNotice::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_SSSkillGetNotice::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_UELSSWidgetHUD_SSSkillGetNotice_Init = FName(TEXT("Init"));
	void UELSSWidgetHUD_SSSkillGetNotice::Init()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSkillGetNotice_Init),NULL);
	}
	static FName NAME_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam = FName(TEXT("SetHeatSkillParam"));
	void UELSSWidgetHUD_SSSkillGetNotice::SetHeatSkillParam(int32 InSkillInex)
	{
		ELSSWidgetHUD_SSSkillGetNotice_eventSetHeatSkillParam_Parms Parms;
		Parms.InSkillInex=InSkillInex;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam),&Parms);
	}
	void UELSSWidgetHUD_SSSkillGetNotice::StaticRegisterNativesUELSSWidgetHUD_SSSkillGetNotice()
	{
		UClass* Class = UELSSWidgetHUD_SSSkillGetNotice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayIn", &UELSSWidgetHUD_SSSkillGetNotice::execPlayIn },
			{ "Reset", &UELSSWidgetHUD_SSSkillGetNotice::execReset },
			{ "Update", &UELSSWidgetHUD_SSSkillGetNotice::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics
	{
		struct ELSSWidgetHUD_SSSkillGetNotice_eventPlayIn_Parms
		{
			FString InSkillCategory;
			int32 HeatSkillId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSkillCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSkillCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeatSkillId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_InSkillCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_InSkillCategory = { "InSkillCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSkillGetNotice_eventPlayIn_Parms, InSkillCategory), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_InSkillCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_InSkillCategory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_HeatSkillId = { "HeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSkillGetNotice_eventPlayIn_Parms, HeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_InSkillCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::NewProp_HeatSkillId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, nullptr, "PlayIn", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSkillGetNotice_eventPlayIn_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSkillInex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::NewProp_InSkillInex = { "InSkillInex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSkillGetNotice_eventSetHeatSkillParam_Parms, InSkillInex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::NewProp_InSkillInex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, nullptr, "SetHeatSkillParam", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSkillGetNotice_eventSetHeatSkillParam_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics
	{
		struct ELSSWidgetHUD_SSSkillGetNotice_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_SSSkillGetNotice_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_SSSkillGetNotice_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_NoRegister()
	{
		return UELSSWidgetHUD_SSSkillGetNotice::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayInAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayInAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOutAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayOutAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutWidget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillIDArray;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTimeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTimeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaitTimeArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkillNameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkillNameArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShowElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsShow_MetaData[];
#endif
		static void NewProp_IsShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayingPlayOut_MetaData[];
#endif
		static void NewProp_IsPlayingPlayOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayingPlayOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WINDOWSHOWMAXTIME_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WINDOWSHOWMAXTIME;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Init, "Init" }, // 2398625069
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_PlayIn, "PlayIn" }, // 474416402
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Reset, "Reset" }, // 4096085314
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_SetHeatSkillParam, "SetHeatSkillParam" }, // 1628022338
		{ &Z_Construct_UFunction_UELSSWidgetHUD_SSSkillGetNotice_Update, "Update" }, // 1477544332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_SSSkillGetNotice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayInAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayInAnim = { "PlayInAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, PlayInAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayInAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayInAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayOutAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayOutAnim = { "PlayOutAnim", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, PlayOutAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayOutAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayOutAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_LayoutWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_LayoutWidget = { "LayoutWidget", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, LayoutWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_LayoutWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_LayoutWidget_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray_Inner = { "SkillIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray = { "SkillIDArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, SkillIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray_Inner = { "WaitTimeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray = { "WaitTimeArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, WaitTimeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray_Inner = { "SkillNameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray = { "SkillNameArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, SkillNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_ShowElapsed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_ShowElapsed = { "ShowElapsed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, ShowElapsed), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_ShowElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_ShowElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_SSSkillGetNotice*)Obj)->IsShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow = { "IsShow", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_SSSkillGetNotice), &Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	void Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut_SetBit(void* Obj)
	{
		((UELSSWidgetHUD_SSSkillGetNotice*)Obj)->IsPlayingPlayOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut = { "IsPlayingPlayOut", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSWidgetHUD_SSSkillGetNotice), &Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WINDOWSHOWMAXTIME_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_SSSkillGetNotice" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_SSSkillGetNotice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WINDOWSHOWMAXTIME = { "WINDOWSHOWMAXTIME", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_SSSkillGetNotice, WINDOWSHOWMAXTIME), METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WINDOWSHOWMAXTIME_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WINDOWSHOWMAXTIME_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayInAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_PlayOutAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_LayoutWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillIDArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WaitTimeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_SkillNameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_ShowElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_IsPlayingPlayOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::NewProp_WINDOWSHOWMAXTIME,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_SSSkillGetNotice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::ClassParams = {
		&UELSSWidgetHUD_SSSkillGetNotice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_SSSkillGetNotice, 1371391714);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_SSSkillGetNotice>()
	{
		return UELSSWidgetHUD_SSSkillGetNotice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_SSSkillGetNotice(Z_Construct_UClass_UELSSWidgetHUD_SSSkillGetNotice, &UELSSWidgetHUD_SSSkillGetNotice::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_SSSkillGetNotice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_SSSkillGetNotice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
