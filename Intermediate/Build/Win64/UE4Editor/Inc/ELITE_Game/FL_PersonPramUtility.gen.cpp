// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/FL_PersonPramUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFL_PersonPramUtility() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UFL_PersonPramUtility_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UFL_PersonPramUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass();
// End Cross Module References
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGenerateBirthDayText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Month);
		P_GET_PROPERTY(FIntProperty,Z_Param_Day);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFL_PersonPramUtility::GenerateBirthDayText(Z_Param_Month,Z_Param_Day);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGetBirthMonthTextList)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFL_PersonPramUtility::GetBirthMonthTextList(Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGetBodyHeightText)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Inch);
		P_GET_UBOOL(Z_Param_bToM);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFL_PersonPramUtility::GetBodyHeightText(Z_Param_Inch,Z_Param_bToM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGetBodyWeightText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Pounds);
		P_GET_UBOOL(Z_Param_bToKg);
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFL_PersonPramUtility::GetBodyWeightText(Z_Param_Pounds,Z_Param_bToKg,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGetBodyWeightToWeightClass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBodyWeightToWightClass*)Z_Param__Result=UFL_PersonPramUtility::GetBodyWeightToWeightClass(Z_Param_BodyWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFL_PersonPramUtility::execGetDisplayText)
	{
		P_GET_ENUM(EBodyWeightToWightClass,Z_Param_BodyWeightRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UFL_PersonPramUtility::GetDisplayText(EBodyWeightToWightClass(Z_Param_BodyWeightRank));
		P_NATIVE_END;
	}
	void UFL_PersonPramUtility::StaticRegisterNativesUFL_PersonPramUtility()
	{
		UClass* Class = UFL_PersonPramUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBirthDayText", &UFL_PersonPramUtility::execGenerateBirthDayText },
			{ "GetBirthMonthTextList", &UFL_PersonPramUtility::execGetBirthMonthTextList },
			{ "GetBodyHeightText", &UFL_PersonPramUtility::execGetBodyHeightText },
			{ "GetBodyWeightText", &UFL_PersonPramUtility::execGetBodyWeightText },
			{ "GetBodyWeightToWeightClass", &UFL_PersonPramUtility::execGetBodyWeightToWeightClass },
			{ "GetDisplayText", &UFL_PersonPramUtility::execGetDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics
	{
		struct FL_PersonPramUtility_eventGenerateBirthDayText_Parms
		{
			int32 Month;
			int32 Day;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Month;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Day;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGenerateBirthDayText_Parms, Month), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGenerateBirthDayText_Parms, Day), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGenerateBirthDayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_Day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GenerateBirthDayText", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGenerateBirthDayText_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics
	{
		struct FL_PersonPramUtility_eventGetBirthMonthTextList_Parms
		{
			TArray<FText> Out;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBirthMonthTextList_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GetBirthMonthTextList", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGetBirthMonthTextList_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics
	{
		struct FL_PersonPramUtility_eventGetBodyHeightText_Parms
		{
			float Inch;
			bool bToM;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Inch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToM_MetaData[];
#endif
		static void NewProp_bToM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToM;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_Inch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_Inch = { "Inch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyHeightText_Parms, Inch), METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_Inch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_Inch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM_SetBit(void* Obj)
	{
		((FL_PersonPramUtility_eventGetBodyHeightText_Parms*)Obj)->bToM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM = { "bToM", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_PersonPramUtility_eventGetBodyHeightText_Parms), &Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyHeightText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_Inch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_bToM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GetBodyHeightText", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGetBodyHeightText_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics
	{
		struct FL_PersonPramUtility_eventGetBodyWeightText_Parms
		{
			int32 Pounds;
			bool bToKg;
			int32 Step;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToKg_MetaData[];
#endif
		static void NewProp_bToKg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToKg;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Pounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Pounds = { "Pounds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyWeightText_Parms, Pounds), METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Pounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Pounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg_SetBit(void* Obj)
	{
		((FL_PersonPramUtility_eventGetBodyWeightText_Parms*)Obj)->bToKg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg = { "bToKg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FL_PersonPramUtility_eventGetBodyWeightText_Parms), &Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyWeightText_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyWeightText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Pounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_bToKg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GetBodyWeightText", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGetBodyWeightText_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics
	{
		struct FL_PersonPramUtility_eventGetBodyWeightToWeightClass_Parms
		{
			int32 BodyWeight;
			EBodyWeightToWightClass ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyWeight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_BodyWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_BodyWeight = { "BodyWeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyWeightToWeightClass_Parms, BodyWeight), METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_BodyWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_BodyWeight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetBodyWeightToWeightClass_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_BodyWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GetBodyWeightToWeightClass", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGetBodyWeightToWeightClass_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics
	{
		struct FL_PersonPramUtility_eventGetDisplayText_Parms
		{
			EBodyWeightToWightClass BodyWeightRank;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyWeightRank_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeightRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyWeightRank;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank = { "BodyWeightRank", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetDisplayText_Parms, BodyWeightRank), Z_Construct_UEnum_ELITE_Game_EBodyWeightToWightClass, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FL_PersonPramUtility_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_BodyWeightRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFL_PersonPramUtility, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(FL_PersonPramUtility_eventGetDisplayText_Parms), Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFL_PersonPramUtility_NoRegister()
	{
		return UFL_PersonPramUtility::StaticClass();
	}
	struct Z_Construct_UClass_UFL_PersonPramUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFL_PersonPramUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFL_PersonPramUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GenerateBirthDayText, "GenerateBirthDayText" }, // 3826820547
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GetBirthMonthTextList, "GetBirthMonthTextList" }, // 4129329008
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyHeightText, "GetBodyHeightText" }, // 2062763775
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightText, "GetBodyWeightText" }, // 1474207179
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GetBodyWeightToWeightClass, "GetBodyWeightToWeightClass" }, // 2631185065
		{ &Z_Construct_UFunction_UFL_PersonPramUtility_GetDisplayText, "GetDisplayText" }, // 549274821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFL_PersonPramUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FL_PersonPramUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FL_PersonPramUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFL_PersonPramUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFL_PersonPramUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFL_PersonPramUtility_Statics::ClassParams = {
		&UFL_PersonPramUtility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFL_PersonPramUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFL_PersonPramUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFL_PersonPramUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFL_PersonPramUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFL_PersonPramUtility, 1710960239);
	template<> ELITE_GAME_API UClass* StaticClass<UFL_PersonPramUtility>()
	{
		return UFL_PersonPramUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFL_PersonPramUtility(Z_Construct_UClass_UFL_PersonPramUtility, &UFL_PersonPramUtility::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UFL_PersonPramUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFL_PersonPramUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
